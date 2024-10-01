#pragma once

#include "preclude.h"

mod _result {
template <typename T, typename E>
using _result_variant = std::variant<T, E, std::monostate>;

template<typename T, typename E>
struct _result_ok_visitor {
    fn operator()(T value) const -> T {
        return value;
    }
    fn operator()(E err) const -> T {
        panic("called `Result::unwrap()` on an `Err` value: {}", err);
        return T();
    }
    fn operator()(std::monostate) const -> T {
        panic("called `Result::unwrap()` on a moved value");
        return T();
    }
};

template<typename T, typename E>
struct _result_err_visitor {
    fn operator()(T value) const -> E {
        panic("called `Result::unwrap_err()` on an `Ok` value: {}", value);
        return E();
    }
    fn operator()(E err) const -> E {
        return err;
    }
    fn operator()(std::monostate) const -> E {
        panic("called `Result::unwrap()` on a moved value");
        return E();
    }
};


template <typename T, typename E>
struct _result_wrapper {
    _result_wrapper(T value): is_ok_(true) , data(value) {}
    _result_wrapper(E err)  : is_err_(true), data(err)   {}

    fn is_ok()  -> bool { return self->is_ok_ ; }
    fn is_err() -> bool { return self->is_err_; }

    fn unwrap() -> T {
        let temp = std::move(self->data);
        self->data = std::monostate();
        self->is_ok_ = false;
        return std::visit(_result_ok_visitor<T, E>(), temp);
    }
    fn unwrap_err() -> E {
        let temp = std::move(self->data);
        self->data = std::monostate();
        self->is_err_ = false;
        return std::visit(_result_err_visitor<T, E>(), temp);
    }

    fn operator=(_result_wrapper&& other) noexcept {
        if (self != other) {
            self->is_ok_ = other.is_ok_;
            self->data = std::move(other.data);
        }
        return *self;
    }

    prv bool is_ok_  {false};
    prv bool is_err_ {false};
    prv _result_variant<T, E> data;
};
}

template <typename T, typename E>
type Result = _result::_result_wrapper<T, E>;

template<typename T, typename E>
fn Ok(T value) -> Result<T, E> {
    return Result<T, E>(value);
}

template<typename T, typename E>
fn Err(E err) -> Result<T, E> {
    return Result<T, E>(err);
}

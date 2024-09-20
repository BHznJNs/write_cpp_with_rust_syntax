#pragma once

#include "macros.h"
#include "preclude.h"

mod _option {
template<typename T>
using _option_variant = std::variant<T, std::monostate>;

template<typename T>
struct _option_visitor {
    fn operator()(T value) const -> T {
        return std::move(value);
    }
    fn operator()(std::monostate) const -> T {
        panic("called `Option::unwrap()` on a `None` value");
        return T();
    }
};

template<typename T>
struct _option_wrapper {
    _option_wrapper(): has_value_(false), data(std::monostate()) {}
    _option_wrapper(T value): has_value_(true), data(value) {}

    fn is_some() -> bool { return  self->has_value_; }
    fn is_none() -> bool { return !self->has_value_; }
    fn unwrap() -> T {
        return std::visit(_option_visitor<T>(), self->data);
    }

    fn operator=(_option_wrapper&& other) noexcept {
        self->has_value_ = other.has_value_;
        self->data = std::move(other.data);
    }

    pri bool has_value_;
    pri _option_variant<T> data;
};
}

template<typename T>
type Option = _option::_option_wrapper<T>;

template<typename T>
fn Some(T value) -> Option<T> {
    return Option<T>(value);
}

template<typename T>
fn None() -> Option<T> {
    return Option<T>();
}
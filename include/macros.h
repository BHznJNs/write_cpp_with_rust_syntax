#pragma once

#include "preclude.h"

use fmt::format;  // NOLINT
use fmt::print;   // NOLINT
use fmt::println; // NOLINT

template <typename... T>
fn panic(fmt::format_string<T...> fmt, T&&... args) -> never {
    let msg = format(fmt, args...);
    if (!msg.empty()) {
        println(msg);
    }
    std::terminate();
}

fn todo() -> never;
fn unimplemented() -> never;
fn unreachable() -> never;

template <typename... T>
fn todo(fmt::format_string<T...> fmt, T&&... args) -> never {
    let msg = format(fmt, args...);
    panic("not yet implemented: {}", msg);
}

template <typename... T>
fn unimplemented(fmt::format_string<T...> fmt, T&&... args) -> never {
    let msg = format(fmt, args...);
    panic("not implemented: {}", msg);
}

template <typename... T>
fn unreachable(fmt::format_string<T...> fmt, T&&... args) -> never {
    let msg = format(fmt, args...);
    panic("entered unreachable code: {}", msg);
}

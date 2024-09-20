#pragma once

#include "fmt/core.h"
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

template <typename... T>
fn todo(fmt::format_string<T...> fmt, T&&... args) -> never {
    let msg = format(fmt, args...);
    if (msg.empty()) {
        panic("not yet implemented");
    }
    panic("not yet implemented: {}", msg);
}

template <typename... T>
fn unimplemented(fmt::format_string<T...> fmt, T&&... args) -> never {
    let msg = format(fmt, args...);
    if (msg.empty()) {
        panic("not implemented");
    }
    panic("not implemented: {}", msg);
}

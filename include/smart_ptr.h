#pragma once

#include "preclude.h"

template<typename T>
struct Box: std::unique_ptr<T> {
    static fn new(T value) -> Box<T> {
        // 
        // return Box(std::make_unique<T>(value));
    }
};

// template<typename T>
// type Box = std::unique_ptr<T>;
// template<typename T>
// type Rc = std::shared_ptr<const T>;

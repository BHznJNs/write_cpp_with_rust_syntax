#pragma once

#include "preclude.h"

type isize = std::intptr_t;
type i64 = signed long int;
type i32 = signed int;
type i16 = signed short int;
type i8  = signed char;
type usize = std::uintptr_t;
type u64 = unsigned long int;
type u32 = unsigned int;
type u16 = unsigned short int;
type u8  = unsigned char;
type never = void;

type String = std::string;
type str = std::string_view;
template<typename T>
type Vec = std::vector<T>;

template<typename T>
type Box = std::unique_ptr<T>;
template<typename T>
type Rc = std::shared_ptr<const T>;

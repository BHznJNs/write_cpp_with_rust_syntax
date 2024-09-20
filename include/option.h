#pragma once

#include "preclude.h"

// type None = std::nullptr_t;

// template<typename T>
// type Option = std::variant<T, None>;

// mod Option {

// // template<typename T>
// // struct _some;
// // struct _none;

// struct Option {
//     virtual fn is_some() -> bool { return false; };
//     virtual fn is_none() -> bool { return false; };

//     // pub template<typename T>
//     // fn unwrap() -> T* {
//     //     let derived_ptr = dynamic_cast<_some<T>*>(this);
//     //     if (derived_ptr != nullptr) {
//     //         return derived_ptr->get_value();
//     //     } else {
//     //         return nullptr;
//     //     }
//     // };
// };

// template<typename T>
// struct _some: public Option {
//     pub _some(T value): value_(value) {};
//     pub fn is_some() -> bool {
//         return true;
//     }
//     pub fn is_none() -> bool {
//         return false;
//     }

//     pub fn get_value() -> T* {
//         return &this->value_;
//     }
//     pri T value_;
// };

// struct _none: public Option {
//     pub fn is_some() -> bool {
//         return false;
//     }
//     pub fn is_none() -> bool {
//         return true;
//     }
// };

// }


// std::variant<T>

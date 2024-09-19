#include <cstdint>
#include <string>
#include <vector>
#include <memory>

#define let auto
#define fn  auto

using isize = std::intptr_t;
using i64 = signed long int;
using i32 = signed int;
using i16 = signed short int;
using i8  = signed char;
using usize = std::uintptr_t;
using u64 = unsigned long int;
using u32 = unsigned int;
using u16 = unsigned short int;
using u8  = unsigned char;

using String = std::string;
template<typename T>
using Vec = std::vector<T>;


template<typename T>
using Box = std::unique_ptr<T>;
template<typename T>
using Rc = std::shared_ptr<const T>;



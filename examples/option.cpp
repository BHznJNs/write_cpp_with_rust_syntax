#include "option.h"
#include "fmt/core.h"
#include "macros.h"
#include "preclude.h"

fn main() -> i32 {
    let num = None<usize>();
    println("is num None: {}", num.is_none());
    num = Some<usize>(10);
    println("is num Some: {}", num.is_some());
    println("num value: {}", num.unwrap());
}

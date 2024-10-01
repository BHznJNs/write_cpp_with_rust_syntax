#include "preclude.h"

fn main() -> i32 {
    let value = 1;
    let boxed = Box<usize>::new(value);
    println("boxed value: {}", *boxed);
}
#include "preclude.h"

fn main() -> i32 {
    println("Before panic");
    panic("Panic!");
    println("After panic");
}

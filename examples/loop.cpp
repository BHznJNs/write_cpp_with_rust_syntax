#include "fmt/core.h"
#include "preclude.h"

fn main() -> i32 {
    let vec = Vec<int> {1, 2, 3, 4};
    for (let item in vec) {
        println("{}", item);
    }

    loop {
        println("Infinity loop");
    }
}
#include "preclude.h"

fn main() -> i32 {
    let count = 0;
    loop {
        if (count == 10) {
            break;
        }
        count += 1;
    }
    std::cout << count << '\n';
}
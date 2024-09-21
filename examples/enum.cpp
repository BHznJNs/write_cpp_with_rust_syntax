#include "preclude.h"

enum Color {
    Black,
    White,
    Red,
    Blue,
    Green,
};

fn main() -> i32 {
    let color_val = Color::Black;
    match (color_val) {
        case Color::Black:
            // do something
            break;
        case Color::White:
        case Color::Red:
        case Color::Blue:
        case Color::Green:
            // do something else
            break;
    }
}
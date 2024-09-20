#include "preclude.h"

struct Person {
    static fn new(String name, u16 age) {
        return Person {
            std::move(name),
            age,
        };
    };

    String name;
    u16 age;
};

fn main() -> i32 {
    let p = Person::new("Test", 1024);
    println("Person name: {}, age: {}", p.name, p.age);
}

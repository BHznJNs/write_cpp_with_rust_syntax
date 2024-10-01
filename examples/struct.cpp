#include "preclude.h"

struct Person {
    use Self = Person;

    pub String name;
    pub u16 age;

    pub static fn new(String name, u16 age) {
        return Person {
            std::move(name),
            age,
        };
    };
};

fn main() -> i32 {
    let p = Person::new("Test", 1024);
    println("Person name: {}, age: {}", p.name, p.age);
}

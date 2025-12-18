#include <iostream>

class Animal {
public:
    Animal() {
        std::cout << "Animal constructor called\n";
    }
};

class Mammal :virtual public Animal {
public:
    Mammal() {
        std::cout << "Mammal constructor called\n";
    }
};

class Bird : virtual public Animal {
public:
    Bird() {
        std::cout << "Bird constructor called\n";
    }
};

class Dog : public Mammal, public Bird {
public:
    Dog() {
        std::cout << "Dog constructor called\n";
    }
};

int main() {
    Dog d;
}

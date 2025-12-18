#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;
    std::string species;
    int age;

public:
    Animal(std::string n, std::string sp, int a)
        : name(n), species(sp), age(a)   {
        std::cout << "Animal constructor called for " << name << std::endl;
    }

    virtual void makeSound() {
        std::cout << "Animal makes a generic sound." << std::endl;
    }

};


class Mammal : virtual public Animal {
protected:
    bool hasFur;

public:
    Mammal(std::string n, std::string sp, int a, bool fur):Animal(n, sp, a), hasFur(fur)
    {
        std::cout << "Mammal constructor called.\n";
    }


    void makeSound() override {
        std::cout << "Mammal sound!\n";
    }
};


class Bird : virtual public Animal {
protected:
    bool canFly;

public:
    Bird(std::string n, std::string sp, int a, bool fly)
        : Animal(n, sp, a), canFly(fly)
    {
        std::cout << "Bird constructor called.\n";
    }

    void makeSound() override {
        std::cout << "Bird sound!\n";
    }
};


class Dog : public Mammal, public Bird {
public:
    Dog(std::string n, int a)
        : Animal(n, "Dog", a), Mammal(n, "Dog", a, true), Bird(n, "Dog", a, false)
    {
        std::cout << "Dog constructor called.\n";
    }

    void makeSound() override {
        std::cout << "Dog says: Bark! Bark!" << std::endl;
    }

};


class Parrot : public Bird, public Mammal {
public:
    Parrot(std::string n, int a)
        : Animal(n, "Parrot", a), Bird(n, "Parrot", a, true), Mammal(n, "Parrot", a, false)
    {
        std::cout << "Parrot constructor called.\n";
    }

    void makeSound() override {
        std::cout << "Parrot says: Hello! I can mimic speech!" << std::endl;
    }

  
};


int main() {
    std::cout << "\nCreating Dog Object\n";
    Dog dog("Buddy", 5);

    std::cout << "\nCreating Parrot Object\n";
    Parrot parrot("Polly", 2);

    std::cout << "\nPolymorphism\n";

    Animal* zoo[2];
    zoo[0] = &dog;
    zoo[1] = &parrot;
    zoo[0]->makeSound();
    zoo[1]->makeSound();
     
    return 0;
}

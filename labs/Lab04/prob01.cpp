// Problem 1:
// Create a base class Animal with a virtual function makeSound().
// Create two derived classes Dog and Cat that override this function.
// In main(), create base class pointers pointing to objects of Dog and Cat, and call
// the makeSound() function.
#include<iostream>


class Animal
{
    public:
    virtual void makeSound()
    {
        std::cout<<"Generic sound"<<std::endl;
    }

};

class Dog:public Animal
{
    void makeSound()override
    {
        std::cout<<"Dog Barks"<<std::endl;
    }
};

class Cat:public Animal
{
    void makeSound()override
    {
        std::cout<<"Cat meows"<<std::endl;
    }
};



int main()
{
    Animal *baseptr;
    Dog dogObj;
    Cat catObj;
    baseptr=&dogObj;
    baseptr->makeSound();
    baseptr=&catObj;
    baseptr->makeSound();



}
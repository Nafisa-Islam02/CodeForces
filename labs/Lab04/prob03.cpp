
#include<iostream>
#include<string>

class Vehicle
{
    public:
    virtual void start(){}

};

class Car:public Vehicle
{
    public:
    void start()override
    {
        std::cout<<"Car goes vroom vroom!!!"<<std::endl;
    }
};

class Bike:public Vehicle
{
    public:
    void start()override
    {
        std::cout<<"Bike goes vroom vroom!!!"<<std::endl;
    }

};


int main()
{
    Vehicle* arr[2];
    Car carObj;
    Bike bikeObj;
    arr[0]=&carObj;
    arr[1]=&bikeObj;
    for (size_t i = 0; i < 2; i++)
    {
        arr[i]->start();
    }
    

}
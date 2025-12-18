// Vehicle Management System
// In this system, you manage different types of vehicles (e.g., cars, bikes, and trucks) that
// inherit common attributes and behaviors, but also have unique features. You must also
// implement the diamond problem and polymorphism.
// Attributes:
//  Diamond Problem: LandVehicle and FuelVehicle will both inherit from Vehicle,
// and Car and Truck will inherit from both LandVehicle and FuelVehicle, forming a
// diamond shape.
//  Inheritance: Base class Vehicle and intermediate classes LandVehicle and
// FuelVehicle.
//  Constructor: Initialize attributes such as make, model, and fuel capacity.
//  Polymorphism: Each



#include<iostream>
#include<string>



class Vehicle
{
    public:
    std::string model;
    Vehicle(std::string m):model(m)
    {
        std::cout<<"Vehicle constructor called\n";

    }
    virtual void output()
    {
        std::cout<<"The model is: "<<model<<std::endl;
    }
};

class LandVehicle:virtual public Vehicle
{
    public:
    int wheels;
    LandVehicle(std::string m,int w):Vehicle(m),wheels(w)
    {
        std::cout<<"LandVehicle constructor called\n";

    }
    void output()override
    {
        std::cout<<"The wheels are: "<<wheels<<std::endl;   
    }

};

class FuelVehicle:virtual public Vehicle
{
    public:
    std::string typeOfFuel;
    FuelVehicle(std::string m,std::string f):typeOfFuel(f),Vehicle(m)
    {
        std::cout<<"FuelVehicle constructor called\n";
    }
    void output()override
    {
        std::cout<<"The type of fuel is: "<<typeOfFuel<<std::endl;   
    }

};

class Truck:public LandVehicle,public FuelVehicle
{
    public:
    std::string type;
    Truck(std::string m,std::string t,int w,std::string f):Vehicle(m),FuelVehicle(m,f),LandVehicle(m,w),type(t)
    {
        std::cout<<"Truck constructor called\n";
    }

    void output()override
    {
        Vehicle::output(); 
        LandVehicle::output();
        FuelVehicle::output();

        std::cout<<"The type of car is: "<<type<<std::endl;   
    }
};

int main()
{
    Truck obj("corolla","gx34",20,"Diseal");
    Vehicle *baseptr[2];
    baseptr[0]=&obj;
    baseptr[0]->output();

}
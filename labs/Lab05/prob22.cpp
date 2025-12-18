#include <iostream>
#include <string>

// =========================
// Base Class: Vehicle
// =========================
class Vehicle {
protected:
    std::string make;
    std::string model;
    int fuelCapacity; // in liters

public:
    Vehicle(std::string mk, std::string md, int fc)
        : make(mk), model(md), fuelCapacity(fc)
    {
        std::cout << "Vehicle constructor called for " << make << " " << model << "\n";
    }

    virtual void displayInfo() {
        std::cout << "Make: " << make << ", Model: " << model
                  << ", Fuel Capacity: " << fuelCapacity << "L\n";
    }

    virtual void startEngine() {
        std::cout << "Vehicle engine started.\n";
    }

    virtual ~Vehicle() {}
};

// =========================
// Intermediate Class: LandVehicle
// =========================
class LandVehicle : virtual public Vehicle {
protected:
    int numWheels;

public:
    LandVehicle(std::string mk, std::string md, int fc, int wheels)
        : Vehicle(mk, md, fc), numWheels(wheels)
    {
        std::cout << "LandVehicle constructor called.\n";
    }

    void displayInfo() override {
        Vehicle::displayInfo();
        std::cout << "Number of wheels: " << numWheels << "\n";
    }

    void startEngine() override {
        std::cout << "LandVehicle engine started.\n";
    }
};

// =========================
// Intermediate Class: FuelVehicle
// =========================
class FuelVehicle : virtual public Vehicle {
protected:
    std::string fuelType;

public:
    FuelVehicle(std::string mk, std::string md, int fc, std::string fuel)
        : Vehicle(mk, md, fc), fuelType(fuel)
    {
        std::cout << "FuelVehicle constructor called.\n";
    }

    void displayInfo() override {
        Vehicle::displayInfo();
        std::cout << "Fuel type: " << fuelType << "\n";
    }

    void startEngine() override {
        std::cout << "FuelVehicle engine started using " << fuelType << ".\n";
    }
};

// =========================
// Derived Class: Car
// =========================
class Car : public LandVehicle, public FuelVehicle {
public:
    Car(std::string mk, std::string md, int fc, int wheels, std::string fuel)
        : Vehicle(mk, md, fc), LandVehicle(mk, md, fc, wheels), FuelVehicle(mk, md, fc, fuel)
    {
        std::cout << "Car constructor called.\n";
    }

    void displayInfo() override {
        Vehicle::displayInfo();
        std::cout << "Car specific info: " << "Wheels=" << numWheels
                  << ", Fuel=" << fuelType << "\n";
    }

    void startEngine() override {
        std::cout << "Car engine started: Vroom!\n";
    }
};

// =========================
// Derived Class: Truck
// =========================
class Truck : public LandVehicle, public FuelVehicle {
public:
    Truck(std::string mk, std::string md, int fc, int wheels, std::string fuel)
        : Vehicle(mk, md, fc), LandVehicle(mk, md, fc, wheels), FuelVehicle(mk, md, fc, fuel)
    {
        std::cout << "Truck constructor called.\n";
    }

    void displayInfo() override {
        Vehicle::displayInfo();
        std::cout << "Truck specific info: " << "Wheels=" << numWheels
                  << ", Fuel=" << fuelType << "\n";
    }

    void startEngine() override {
        std::cout << "Truck engine started: Rumble!\n";
    }
};

// =========================
// Demonstration of Polymorphism
// =========================
int main() {
    std::cout << "\n--- Creating Car Object ---\n";
    Car car1("Toyota", "Corolla", 50, 4, "Petrol");

    std::cout << "\n--- Creating Truck Object ---\n";
    Truck truck1("Volvo", "FH16", 300, 18, "Diesel");

    std::cout << "\n--- Polymorphism Demo ---\n";
    Vehicle* fleet[2];
    fleet[0] = &car1;
    fleet[1] = &truck1;

    for (int i = 0; i < 2; i++) {
        fleet[i]->displayInfo();
        fleet[i]->startEngine();
        std::cout << "\n";
    }

    return 0;
}


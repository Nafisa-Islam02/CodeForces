#include <iostream>
#include <string>
using namespace std;


class Person {
public:
    string name;
    int age;

    Person() {}
    Person(string n, int a) : name(n), age(a) {
        cout << "Person constructor called." << endl;
    }

    virtual void printInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};


class Staff : virtual public Person {
public:
    string department;

    Staff(string dep) : department(dep) {
        cout << "Staff constructor called." << endl;
    }

    virtual void printRole() {
        cout << "Staff in department: " << department << endl;
    }
};


class Admin : virtual public Person {
public:
    string role;

    Admin(string r) : role(r) 
    {
        cout << "Admin constructor called." << endl;
    }

    virtual void printRole() 
    {
        cout << "Admin role: " << role << endl;
    }
};

class Manager : public Staff, public Admin {
public:
    Manager(string dep, string r) : Staff(dep), Admin(r) 
    {
        cout << "Manager constructor called." << endl;
    }

    void printInfo() override {
        
        Person::printInfo();
        Staff::printRole();
        Admin::printRole();
    }
};


class Director : public Manager {
public:
    string hospitalName;

    Director(string n, int a, string dep, string r, string hosp)
        : Person(n, a), Manager(dep, r), hospitalName(hosp) {
        cout << "Director constructor called." << endl<<endl;
    }

    void printInfo() override {
        Manager::printInfo();
        cout << "Hospital: " << hospitalName << endl;
    }
};

int main() {
    cout << "\\-----Creating Director object:-----\\"<<endl<<endl;
    Director dir("Alice", 50, "HR", "Head of Department", "City Hospital");

   Person* pObj;
   pObj=&dir;
   cout <<"\\-----Director Information:-----\\"<<endl<<endl;
   pObj->printInfo();

    return 0;
}

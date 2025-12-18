// Problem 4:
// You are building a simple academic system for RUET.
// Create the following class hierarchy:
// 1. Base Class: RUET
// o Data members: name, roll
// o Member functions:
//  input() – to enter student details
//  display() – virtual function to show details

// 2. Derived Class: ECE (inherits from RUET)
// o Overrides display() to include dept_name
// 3. Further Derived Class: STUDENT (inherits from ECE)
// o Additional data member: cgpa
// o Overrides display() to include cgpa
//  If cgpa > 3.75, display: "Honors Candidate"
#include<iostream>
#include<string>

class RUET
{
    public:
    std::string name;
    int Roll;
    RUET()
    {
        name=n;
        Roll=roll;
    }
    void input();
    virtual void display()
    {
        
    }

};

class ECE:public RUET
{
    public:
    std::string dept_name;
    ECE()
    {
        dept_name=dept;

    }
    void display()override
    {

    }


};
class STUDENT:public ECE
{
    public:
    int cgpa;
    STUDENT()
    {
        cgpa=cg;
    }
     void display()override
     {
       if(cgpa>3.75)
        {
        std::cout<<"Honors Student";
        }
     }
    


};

void RUET::input()
{
    std::cout << "Enter name: ";
    std::getline(std::cin, name);
    std::cout << "Enter roll: ";
    std::cin >> roll<<std::endl;
}

int main()
{
    STUDENT sobj;




}
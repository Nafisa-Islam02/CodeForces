
#include<iostream>
#include<string>

class Person
{
    public:
    std::string name;
    Person(std::string n)
    {
        name=n;
    }
    virtual void showInfo()
    {
        std::cout<<"The student info in baseclass is: "<<name<<std::endl;
    }
};

class Student:public Person
{
    public:
    int studentID;
 
    Student(std::string n,int ID): Person(n)
    {
        studentID=ID;
    }
    void showInfo()override
    {
         std::cout<<"The student info in derive class is: "<<name<<" "<<studentID<<std::endl;
    }
};

void displayByValue(Person obj)
{
    std::cout<<"Display by value(person part is sliced)"<<std::endl;
    obj.showInfo();
}
void displayByRef(Person *obj)
{
    std::cout<<"Display by reference(nothing is sliced)"<<std::endl;
    obj->showInfo();
}

int main()
{
    Student SObj("meghla",2410042);
    displayByValue(SObj);
    displayByRef(&SObj);



}
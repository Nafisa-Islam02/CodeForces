#include <iostream>
#include <string>
using namespace std;

class Animal
{
    public:
    string name,species;
    int age;
    Animal(){}
    Animal(string n,string s, int a):name(n),species(s),age(a)
    {
        cout<<"Animal constructor is called."<<endl;

    }
    virtual void makeSound()
    {
        cout<<"Animal sounds"<<endl;
    }
    virtual void printTraits()
    {
        cout<<"Name: "<<name<<endl
        <<"Species: "<<species<<endl
        <<"Age: "<<age<<endl;
    }
};

class Mammal:virtual public Animal
{
    public:
    bool canProduceMilk=true;
    int gallonsMilk;
    Mammal(int gm): gallonsMilk(gm)
    {
        cout<<"Mammal constructor is called."<<endl;

    }
    void makeSound() override
    {
        cout<<"Mammal sounds"<<endl;

    }
        virtual void printTraits() override
    {
        cout<<"Can Produce Milk: "<<( canProduceMilk? "Yes":"No")<<endl
        <<"Gallons of milk per week:"<<gallonsMilk<<endl;
    }


};


class Bird: virtual public Animal
{
    public:
    bool canFly=true;
    bool laysEggs=true;
    int eggs;
    Bird(int egg): eggs(egg)
    {

        cout<<"Bird constructor is called."<<endl;

    }
    void makeSound() override
    {
        cout<<"Bird sounds!!!"<<endl;
    }
        virtual void printTraits()
    {
        cout<<"Flying ability: "<<(canFly ? "Yes": "No")<<endl
        <<"Can lay eggs: "<<(laysEggs? "Yes" : "No")<<endl
        <<"Eggs per month: "<<eggs<<endl;
    }


};

class Bat:public Mammal,public Bird
{
    public:
    string color;
    Bat(string c,string n,string s,int a,int egg,int gm):Animal(n,s,a),Mammal(gm),Bird(egg),color(c)
    {
        canFly=true;
        laysEggs=false;
        canProduceMilk=false;
        cout<<"Bat constructor is called."<<endl<<endl;
    }
    void makeSound() override
    {
        cout<<"Bats make high-pitched squeaks, clicks, and chirps."<<endl;

    }
    void printTraits() override
    {
        Animal::printTraits();
        Mammal::printTraits();
        Bird::printTraits();
        cout<<"Color: "<<color<<endl<<endl;
    }

};
class Platypus:public Mammal,public Bird
{
    public:
    string stripes;


    Platypus(string st,string n,string s,int a,int egg,int gm):Animal(n,s,a),Mammal(gm),Bird(egg),stripes(st)
    {
        canFly=false;
        laysEggs=true;
        cout<<"Playtypus constructor is called."<<endl<<endl;
    }
    void makeSound() override
    {
        cout<<"Platypus make snuffles and growls ."<<endl;

    }
    void printTraits() override
    {
        Animal::printTraits();
        Mammal::printTraits();
        Bird::printTraits();
        cout<<"Color of Stripe: "<<stripes<<endl;
    }

};


int main()
{
    cout<<"\\Bat object created:\\"<<endl;
    Bat batObj("Black","Bat","Eastern red bat",12,0,0);
    cout<<"\\Playtypus object created:\\"<<endl;
    Platypus playObj("Grey","Platypus","blue doll",23,40,50);
    Animal* aniObj[2];
    aniObj[0]=&batObj;
    aniObj[1]=&playObj;
    for (size_t i = 0; i < 2; i++)
    {
        aniObj[i]->makeSound();
        aniObj[i]->printTraits();
    }
    

    return 0;
}


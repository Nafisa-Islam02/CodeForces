#include<iostream>



class Level1
{

public:
int a1;
Level1(int x1)
{
    a1=x1;
    std::cout<< "This is L1 and Variable 1 in constructor1 in base class: "<<a1<<std::endl;
}

};

class Level2:public Level1
{

public:
int a2;
Level2(int x2,int y2):Level1(x2)
{
    a2=y2;
    std::cout<< "This is L2 and Variable 2 in constructor2 in intermediate class: "<<a2<<std::endl;
}

};

class Level3:public Level2
{

public:
int a3;
Level3(int x3,int y3,int z3):Level2(x3,y3)
{
    a3=z3;
    std::cout<<"This is L3 and Variable 3 in constructor3 in child class: "<<a3<<std::endl;
}


};

int main()
{
Level3 obj2(10,20,30);
}
#include<iostream>



class Doctor
{
public:
int ID=200;

};

class Nurse
{
public:
int stripes=30;

};

class Paitents:public Doctor,public Nurse
{
public:
int color=90;


};

class Food:public Paitents
{
    public:
int eggs=200;
Food()
{
    std::cout<<"The stripes of nurses are: "<<stripes<<'\n'<<"The Id of doctor is: "<< ID<<'\n'<<"The color of paitents is: "<<color<<
    '\n'<<"The number of eggs are: "<<eggs<<std::endl;
}

};


int main()
{
Food obj;


}

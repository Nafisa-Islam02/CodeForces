#include<iostream>


class classA
{
    
    public:
    int roll;
    classA()
    {
        std::cout<< "input roll(in A): "; 
        std::cin>> roll;
    }

    friend class classB;
    friend void myFunction(classA & objA);


};

void myFunction(classA & objA)
{
    std:: cout<< "The roll+1 is(in frnd fuction) : " << objA.roll+1<< std:: endl;
};

class classB
{
    public:
    void accessData(classA & objA)
    {
    std::cout<< "The roll from Class A is:(in class b) " << objA.roll<< std:: endl;
    }

};


int main()
{
    classA objA;
    classB objB;
    objB.accessData(objA);
    myFunction(objA);

}
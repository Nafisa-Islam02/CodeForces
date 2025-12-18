#include<iostream>

class Student{

    public:
    int roll;
    double summation(int a,int b)
    {
        int s=a+b;
        return s;
    }

    private:
    float average;
    double avg(int x,int y)
    {
        return (x+y)/2;
    }

    protected:
    double multy;
    int diff(int p,int q)
    {
        return p-q;
    }

};


int main()
{
    Student megh;

    std:: cout << "(public)The summation: " << megh.summation(9,9)<< std:: endl;
   // std:: cout<< "(private)The avegrage: " <<megh.avg(50,51)<< std::endl;
   std:: cout





}
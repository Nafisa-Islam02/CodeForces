
#include<iostream>
class LibraryItem
{
    public:
    virtual void displayInfo()
    {

    }
};

class Book:public LibraryItem
{
    public:
    void displayInfo()override
    {
        std::cout<<"This is some dumb info about books in book derived class."<<std::endl;
    }

};

class Magazine: public LibraryItem
{
    public:
    void displayInfo()override
    {
        std::cout<<"This is some dumb info about magazines in magazine derived class."<<std::endl;
    }

};


int main()
{
    LibraryItem* libptr[2];
    Magazine magobj;
    Book bookobj;
    libptr[0]=&magobj;
    libptr[1]=&bookobj;
    libptr[0]->displayInfo();
    libptr[1]->displayInfo();
}
#include<iostream>


class Car
{

private:
    std::string company;
    std::string model;
    int year;
public:
  Car()
  {
    std::cout<<"Enter Company: "<< '\n';
    std::cin>>company;
    std::cout<<"Enter Model: " << '\n';
    std::cin>>model;
    std::cout<<"Enter Year: " << '\n';
    std::cin>>year;
  }
  void output();
};

void Car::output()
{
    std:: cout<<"Company: " << company << '\n';
    std:: cout<<"Model: " << model << '\n';
    std :: cout<< "Year: " << year  << '\n';
}


int main()
{
    Car Type1;
    Type1.output();
    

}
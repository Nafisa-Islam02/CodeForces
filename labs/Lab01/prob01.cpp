#include<iostream>

class Rectangle{

private:
    double width;
    double length;
public:

    Rectangle(double width_para,double length_para)
    {
        width=width_para;
        length=length_para;
    }
    
    double area()
    {
        return width*length;
    }
    double perimeter()
    {
        return 2*(width+length);
    }

};


 int main()
 {
    Rectangle Object1(20.0,12.0);

    std:: cout << "Perimeter: " << Object1.perimeter()<< std::endl;
    std:: cout << "Area: " << Object1.area() << std::endl;
 }
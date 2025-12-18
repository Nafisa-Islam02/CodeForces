#include<iostream>

class Cube
{
private:
    int len;
public:
Cube()
{   
    std::cout << "Enter a side of the cube: ";
    std::cin>> len;
}
void Volume();
};

void Cube::Volume()
{  
    std:: cout<< "The volume of a cube is : " << len*len*len << std:: endl;
}

int main()
{
Cube obj1;
obj1.Volume();
}
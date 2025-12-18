#include <iostream>

class student
{
private:
    int privateVar;
    void privateFunc();

protected:
    int protectedVar;
    void protectedFunc();

public:
    int publicVar;
    void publicFunc();    
  

    student();
};

student::student() {
    privateVar = 10;
    protectedVar = 20;
    publicVar = 30;
}

void student::privateFunc() {
    std::cout << "Private Function Called\n";
}

void student::protectedFunc() {
    std::cout << "Protected Function Called\n";
}

void student::publicFunc() {
    std::cout << "Public Function Called\n";
}

int main()
{
    student s;

    std::cout << s.publicVar << std::endl;   
    s.publicFunc();                          


  /* std::cout << s.privateVar;
  
     s.privateFunc();    
    s.privateFunc();                    
    std::cout << s.protectedVar;  
    s.protectedFunc(); */                

    return 0;
}

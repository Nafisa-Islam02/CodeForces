#include<iostream>

class Level1
{
    public:
    double a1;
    void func1pub(double x1)
    {
        a1=x1;
        std::cout<<"This is L1 public member variable in func:(L1) "<<a1<<std::endl;
    }
     void func1pro(int y1)
    {
        b1=y1;
        std::cout<<"This is L1 protected member variable in func:(L1) "<<b1<<std::endl;
    }
      void func1pri(long int z1)
    {
        c1=z1;
        std::cout<<"This is L1 protected member variable in func:(L1) "<<c1<<std::endl;
    }
    protected:
    int b1;
   
    private:
    long int c1;
};

class Level2: public Level1
{
    public:
    double a2;
     void func2pub(double x2)
    {
        a1=x2;
        std::cout<<"This is (L1) public member variable in func(L2): "<<a1<<std::endl;
    }
     void func2pro(int y2)
    {
        b1=y2;
        std::cout<<"This is (L1) protected member variable in func(L2): "<<b1<<std::endl;
    }
      void func2pri()
    {
        std::cout<<"This is (L1) private member variable in func(L2): not accessiable"<<std::endl;
    }
    protected:
    int b2;
    private:
    long int c2;


};

class level3: public Level2
{
    public:
    double a3;
      void func3pub(double x3)
    {
        a1=x3;
        std::cout<<"This is (L1) public member variable in func(L3): "<<a1<<std::endl;
    }
     void func3pro(int y3)
    {
        b1=y3;
        std::cout<<"This is (L1) protected member variable in func(L3): "<<b1<<std::endl;
    }
      void func3pri()
    {
        std::cout<<"This is (L1) private member variable in func(L3): not accessiable"<<std::endl;
    }
      void func4pub(double x4)
    {
        a1=x4;
        std::cout<<"This is (L2) public member variable in func(L3): "<<a1<<std::endl;
    }
     void func4pro(int y4)
    {
        b1=y4;
        std::cout<<"This is (L2) protected member variable in func(L3): "<<b1<<std::endl;
    }
      void func4pri()
    {
        std::cout<<"This is (L2) private member variable in func(L3): not accessiable"<<std::endl;
    }
    protected:
    int b3;
    private:
    long int c3;
};


int main()
{

Level1 obj1;
obj1.func1pub(100.0);
obj1.func1pro(101);
obj1.func1pri(103);

Level2 obj2;
obj2.func2pub(200.0);
obj2.func2pro(201);
obj2.func2pri();

level3 obj3;
obj3.func3pub(300.0);
obj3.func3pro(301);
obj3.func3pri();
obj3.func4pub(400.0);
obj3.func4pro(401);
obj3.func4pri();

}
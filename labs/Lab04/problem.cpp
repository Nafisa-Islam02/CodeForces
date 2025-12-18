
#include<iostream>
using namespace std;
class vehicle{
    public:
  virtual void start()
    {
      cout<<"type of vehicle";
    }
  };
class car:public vehicle {
    public:
  void start() override
      {
        cout<<"car"<<endl;
      }
  };
class bike:public vehicle{
    public:
   void start()override
      {
         cout<<"bike"<<endl;
      }
  };
int main()
  {
    vehicle *arr[2];
    car c;
    bike b;
    arr[0]=&c;
    arr[1]=&b;
  for(int i=0;i<=1;i++)
    {
      arr[i]->start();
    }
  return 0;
  }
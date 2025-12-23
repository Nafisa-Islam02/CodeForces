#include<iostream>

using namespace std;

int main()
{

    int max;
    int l,a,b,x,i,testC;
    cin>>testC;
    while(testC!=0)
    {
    cin>>l>>a>>b;
    i=1;
    max=0;
    x=0;
   // cout<<"tf?"<<endl;
    int temp=l;
   // cout<<temp<<"yo";
    while(temp>0)
    {
        //cout<<"hi"<<endl;
        x=(a+i*b)%l;
        if(x>max) max=x;
        i++;
        temp--;
    }
    cout<<max<<endl;
    testC--;
    }


}
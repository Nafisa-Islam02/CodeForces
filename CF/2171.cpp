#include<iostream>

using namespace std;


int main()
{
    int m,n;
    int case1,count,test;
    
    cin>>test;
    while(test!=0)
    {
    cin>>case1;
    n=0;
    count=0;
    while(n<=case1)
    {
       
            m=0;
            while(m<=case1)
            {
                if(2*n+4*m==case1) count++;
                m++;
            }
            
        n++;
        

    }
    cout<<count<<endl;;
    test--;
    }
}
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int x,tc,temp;
    cin>>tc;
    string s;
    string s1,s2,op1,op2;
    int j;
   
   
   while(tc!=0)
   
   {
    cin>>x;
    if(x==1) 
   {
    cin>>s;
    cout<<s<<endl;
    tc--;
    continue;
   }
   else 
   {
    cin>>s;
    temp=s.size();
    }
   for (size_t i = 0; i < x-1 ; i++)
   
    {
        cin>>s1;
        temp=s1.size();
        op1=s+s1;
        op2=s1+s;
        if(op1>op2) s=s1+s;
        else s=s+s1;
    }
    
    cout<<s<<endl;
    tc--;

}

}
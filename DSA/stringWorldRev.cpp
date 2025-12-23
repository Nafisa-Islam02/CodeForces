#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
void revFunc(string& s1);
void swapFunc(char* sptr, char* eptr);
void revWord(string& s1);


int main()
{
    char end,st;

    //"  hello    world    " -> "hello world"
    string str1="the sky is blue";
    
    // revFunc(str1);
    cout<<"hi its:"<<str1.length()<<endl;
    reverse(str1.begin(),str1.end());//in algorithm lib
    revWord(str1);
    cout<<"now its:" <<str1.length()<<endl;
    
    cout<<str1<<endl;
    return 0;
}

void revWord(string& str)
{
    
    int i=0,flag;
    string s1,s2;
    while(i<str.length())
    {    
        flag=0;
        s1="";

            while(i<str.length() && str[i]!=32 )
            {
                s1=s1+str[i];
                i++;
                flag=1;
            }
            
            if(flag)
            {
            reverse(s1.begin(),s1.end());
            s2=s2+s1+" ";
            }
            if(!flag) i++;
    }
   if(!s2.empty()) s2.pop_back();
    str=s2;
    
}



void revFunc(string& s1)
{
    int s=0,e=s1.length()-1;
    
    while (s<e)
    {
   // swapFunc(&s1[s],&s1[e]); //personal swapfunc
    swap(s1[s],s1[e]); //swapfunc from lib
    s++;
    e--;
    }
    
}

void swapFunc(char* sptr, char* eptr)
{
    char temp;
    temp=*sptr;
    *sptr=*eptr;
    *eptr=temp;
}
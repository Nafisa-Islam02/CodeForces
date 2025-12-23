#include <iostream>
#include <cmath>
#include <string>
#include<cctype>
using namespace std;

int main()
{
    int i=0,count=0;
    string str="hello @@&& worlygyugyuuy$dd";
    while(i<str.length())
    {
      if(  !isalnum(str[i]) && str[i]!=32) count++;
        i++;
    }
   cout<<count<<endl;//special chac count
    //string occurrance removed
    string str1="abcabcaaabcab";
    string part="abc";
    while(str1.length()>0 && str1.find(part)<str1.length())
    {
        str1.erase(str1.find(part),part.length());
    }
    cout<<str1<<endl;
    return 0;
}
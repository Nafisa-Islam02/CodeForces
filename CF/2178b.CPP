#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{

    int tc;
   
    cin>>tc;
    while(tc--)
    {

        string s;
        cin>>s;
        int cnt=0;
        if(s[0]=='u') 
        {
            cnt++;
            s[0]='s';
        }
        if(s[s.length()-1]=='u') 
        {
            cnt++;
            s[s.length()-1]='s';
            
        }
        int i=1;
        while(i<s.length()-2)
        {
           if(s[i]=='u' && s[i+1]!='s')
           {
            cnt++;
            s[i+1]='s';
           }
           i++;

        }
        cout<<cnt<<endl;


    }

    return 0;
}
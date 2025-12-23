#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int tc,mac,que,num,flag,k,sec;
    string Mach;
    cin>>tc;
    while(tc>0)
    {
        cin>>mac>>que;
        cin>>Mach;
        //do extra line for when the input is only As
        int p=0;
        flag=0;

        while(p<Mach.size())
        {
            if(Mach[p]=='B') 
            {flag=1; break;}
            p++;
        }

        if(flag)
        { 
            while(que--)
            {
                cin>>num;
                k=0;
                sec=0;
                while(num!=0)
                {
                    if(Mach[k]=='A') num--;
                    else num/=2;
                    sec++;
                    k++;
                    if(k==mac) k=0;
                }
            cout<<sec<<endl;
            }
        }
        else
        {
            while(que--)
            {
            cin>>num;
            cout<<num<<endl;
            }
        }  

        tc--;
    }
    return 0;
}

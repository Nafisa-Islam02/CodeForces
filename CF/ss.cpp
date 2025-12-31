#include <iostream>
#include <string>
using namespace std;

int main()
{
    int tc,size;
    cin>>tc;
    while(tc--)
    {
        string target("2026");
        string target1("2025");
        cin>>size;
        string s1;
        cin>>s1;
        if(s1.find(target)!= string::npos )
        {
           // cout<<"2026 found";
           cout<<"0"<<endl;
           continue;
        }
        int cnt=0;
        if(s1.find(target1)!= string::npos )
        {
            cout<<"1"<<endl;
            continue;
        }
        cout<<"0"<<endl;
        
    }

    return 0;
}
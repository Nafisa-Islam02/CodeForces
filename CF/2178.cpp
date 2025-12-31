#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{

    int tc;

    cin>>tc;
    while(tc--)
    {

        string temp;
        int n=0,y=0;
        cin>>temp;
        int i=0;
        while(i<temp.length())
        {
            if(temp[i]=='N') n++;
            else y++;
            i++;
        }
        if(y<=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
         
    }
    

    return 0;
}
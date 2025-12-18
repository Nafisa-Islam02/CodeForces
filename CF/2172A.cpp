#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int x,y,z;
//98 99 98
    cin>>x>>y>>z;
    if(abs(x-y)<10 && abs(y-z)<10 && abs(x-z)<10)
    {
        if(x>=z && z>=y) cout<<"final "<<z<<endl;
        else if(y>=z && z>=x) cout<<"final "<<z<<endl;
        else if(y>=x && x>=z) cout<<"final "<<x<<endl;
        else if(z>=x && x>=y) cout<<"final "<<x<<endl;
        else if(x>=y && y>=z) cout<<"final "<<y<<endl;
        else if(z>=y && y>=x) cout<<"final "<<y<<endl;
        else cout<<"blaah";
    }
    else cout<< "check again"<<endl;
    return 0;

}
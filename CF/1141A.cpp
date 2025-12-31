#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    
    int n,m,x,cnt=0;
    cin>>n>>m;

    if(n==m)
    {
        cout<<"0"<<endl;
        return 0;
    }
    if(m%n!=0)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    x=m/n;
    while(x%2==0)
    {
        x/=2;
        cnt++;
    }
    while(x%3==0)
    {
        x/=3;
        cnt++;
    }
    
    if(x==1)cout<<cnt<<endl; 
    else cout<<"-1"<<endl;
    
    return 0;
}
#include<iostream>
int day=0;

using namespace std;

int day0(int m,int n, int rm,int rn);
int days(int m,int n,int rm,int rn);

int main()
{
    int m,n,rm,rn,remain;

    cin>>m>>n>>rm>>rn;
    remain=day0(m,n,rm,rn);

    if(!remain)
    { cout<<remain<<endl;~
    return 0;
    }
    if(rm<=rn) 
    {
        cout<<"-1"<<endl;
        return 0;
    }
    cout<<days(remain,n,rm,rn);
    

}

int day0(int m,int n, int rm,int rn)
{
    if(m+8*rm>=n) return 0;
    else
    {
        day++;
        return m+8*rm-12*rn;
    }

}

int days(int m,int n,int rm,int rn)
{
    //cout<<m<<endl;
    
    while(1)
    if(m+12*rm>=n) return day;
    else
    {
        day++;
        m=m+12*rm-12*rn;
    }

}
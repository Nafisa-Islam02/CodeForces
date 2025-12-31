#include <iostream>
#include <vector>

using namespace std;

int gcd(long long x,long long y)

{
    long long temp;
    while(y!=0)
    {
        temp=x%y;
        x=y;
        y=temp;
    }
 //   cout<<x<<y<<endl;
    return x;

   
    
}

int main()
{
   long long tc,size,found,temp;
   cin>>tc;

   while(tc--)
  
  {
   vector <long long> vec;
        cin>>size;
       
        int hasOne=0;
       found=0;
        for(int i=0;i<size; i++)
        { 
            cin>>temp;
            vec.push_back(temp);
            if(vec[i]==1) hasOne=1;
        }
        if(hasOne) 
        {
            cout<<"2"<<endl;
            continue;
        }
         
        for(int i=2;i<=100; i++)
        {
            for (int j = 0; j < size; j++)
            {
               // cout<<"vec[j]: "<<vec[j]<<" i: "<<i<<endl;
               // cout<<"gcd: "<<gcd(vec[j],i)<<endl;

            if(gcd(vec[j],i)==1)
                {
                cout<<i<<endl;
                found=1;
                break;
                }
            }
            if(found) break;
            
        }
       
    }
   // cout<<"y r u here???";
 
    return 0;
}
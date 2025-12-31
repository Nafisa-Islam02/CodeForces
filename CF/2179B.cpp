#include <iostream>
#include <cmath>
#include<vector>

using namespace std;

int main()
{

    int tc,size,sum,tm,ans;
   cin>>tc;
   for(int i=0;i<tc; i++)
    {
        cin>>size;
        vector <int> vec;
        ans=0;
        sum=0;
        tm=0;
        for(int j=0; j<size; j++)
        {
            int temp;
            cin>>temp;
            vec.push_back(temp);
            
        }
        if(size==2) 
        {
            cout<<abs(vec[0]-vec[1])<<endl; 
            continue;
        }
         for(int j=0; j<vec.size()-1; j++)
        {
            
           sum+=abs(vec[j]-vec[j+1]);
        }
        for(int j=1; j<vec.size()-1; j++)
        {
            int gain=abs(vec[j]-vec[j+1])+abs(vec[j]-vec[j-1])-abs(vec[j+1]-vec[j-1]);
            if(tm<gain) 
            {
                tm=gain;
            }
        }

        ans=sum-tm;

        ans=min(ans,sum-abs(vec[0]-vec[1]));
        ans=min(ans,sum-abs(vec[size-2]-vec[size-1]));
        cout<<ans<<endl;



    }

    return 0;
}
#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;
//most frequnting number (freq>n/2)

int main()
{

   vector <int> nums = {7,2,7,2,7,7,1,5,7};
   sort(nums.begin(),nums.end());
   int cnt=1;
   int ans=nums[0];
   for(int i=1; i<nums.size(); i++)
   {
     if(ans==nums[i])
     {
          cnt++;

     }
     else
     {
          cnt--;
     }
     if(cnt==0)
     {
          ans=nums[i];
          cnt=1;
          
     }

   }
   cout<<ans<<endl;
    

    return 0;
}











/*int main()
{

   vector <int> nums = {2,2,1,2,1,2,1,5,2};
   sort(nums.begin(),nums.end());
   int freq=1;
   int ans=nums[0];
   for(int i=1; i<nums.size(); i++)
   {
     
     if(nums[i]==nums[i-1])
     {
          freq++;
     }
     else
     {
          freq=1;
          ans=nums[i];
     }
     if(freq>nums.size()/2) 
     {
          cout<<ans<<endl;
          break;
     }

   }
    

    return 0;
}

*/  // O(nlogn+n)->O(nlogn)
#include <iostream>
#include <cmath>
#include<vector>

using namespace std;

/*int main()
{
    //lets print all sub arrays
   vector <int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int maxSum=INT_MIN;
   for(int st=0; st< nums.size(); st++)
   {    
        int sum=0;
        for(int end=st; end<nums.size(); end++)
        {
            sum+=nums[end];
            maxSum=max(maxSum,sum);
        }
   }
   cout<<maxSum<<endl;// O(n^2)
    

    return 0;


int main()
{
    //K or this algo
    vector <int> nums = {-2,1,-3,4,-2,2,1,-5,4};
    int maxSum=nums[0];
      int sum =nums[0];
        for(int i = 1;i < nums.size();i++)
        {
            sum += nums[i];
            sum = max(sum, nums[i]);
            maxSum = max(maxSum, sum);
        }
        cout<<maxSum<<endl;
}
}*/


//Kadane's Algo
int main()
{

    vector <int> nums = {-2,-1,-3,-4,-2,-1,-3,-11,-5,-4};
    int maxSum=INT_MIN,currSum=0;
    for(int i=0; i<nums.size(); i++)
    {
        currSum+=nums[i];
        maxSum=max(maxSum,currSum);
        if(currSum<0) currSum=0;
    }
    cout<<maxSum<<endl;

}
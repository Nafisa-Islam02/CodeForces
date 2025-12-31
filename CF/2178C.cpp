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

        int size;
        cin>>size;
        vector <int> vec;
        for (int i = 0; i < size; i++)
        {
            int temp;
            cin>>temp;
            vec.push_back(temp);
        }
        int sum=0;
        int allsum=0;
        
        while(vec.size()>1)
          
        {
            int currsum


        }
        

    cout<<sum<<endl<<endl;



// [−4,2,3,−6]
// 0
// 1	First	[2,3,−6]
// −4
// 2	First	[3,−6]
// −2
// 3	Second	[3]
// 4
// 



// 0	—	[−2,−3,4,10,−9]
// 0
// 1	Second	[−2,4,10,−9]
// 3
// 2	First	[4,10,−9]
// 1
// 3	First	[10,−9]
// 5
// 4	First	[−9]
// 15



    }

    

    return 0;
}
#include<iostream>
using namespace std;


int main()
{

    int testCase,size,max;
    cin>>testCase;
    while(testCase)
    {
        cin>>size;
        int arr[size];          
        for (size_t i = 0; i < size; i++)
        {
            cin>>arr[i];
            
        }
        max=arr[0];
        for(int i=0; i<size; i++)
       {
        if(max<arr[i])
        {
            max=arr[i];
        }
        }
        
        cout<<max<<endl;

        testCase--;
    }
}
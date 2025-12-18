#include<iostream>
using namespace std;


int main()
{

    int count=0,temp;
    int arr[4];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    for (int i = 0; i < 4; i++)
    {
        for (int j= 0;  j<4-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }

    for(int i=0;i<4;i++)
    {
       if(arr[i]==arr[i+1])
        {
            count++;
        }
    }
    cout<<count<<endl;

}
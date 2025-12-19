#include<iostream>

using namespace std;

void input(int *a,int s)
{
    for(int i=0 ; i<s ; i++)
    {
        cout<<"Array Index ["<<i<<"] : ";
        cin>>a[i];
    }

}
void bubbleSort(int *a,int s)
{
    int temp;
    for(int i=0; i<s-1; i++)
    {
        for(int j=0; j<s-i-1; j++)
        {

        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
        }
    }
}
int binarySearch(int *a,int s,int t)
{
    int lo,hi,mid,flag=0;
    lo=0;
    hi=s-1;
    while(lo<=hi)
    {
        mid=lo+(hi-lo)/2;
        if(a[mid]==t) 
        {
           return 1;
        }
        else if(a[mid]>t) 
        {
            hi=mid-1;
        }
        else
        {
            lo=mid+1;

        }
    }
    return 0;

}

int main()
{
    int size,target,isFound=0;
    cout<<"Target number: ";
    cin>>target;
    cout<<"Array Size: ";
    cin>>size;
    
    int arr[size];
    input(arr,size);
    bubbleSort(arr,size);
    isFound=binarySearch(arr,size,target);
    if(isFound) cout<<"The target number "<<target<<" is in the array! :))"<<endl;
    else cout<<"The target number "<<target<< "is not in the array! :(("<<endl;

}
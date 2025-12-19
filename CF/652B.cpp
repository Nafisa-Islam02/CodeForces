#include<iostream>

using namespace std;

void input(int *a,int s)
{
    for (size_t i = 0; i < s; i++)
    {
        cin>>a[i];
    }
    
}
void bubbleSort(int* a,int s)
{
    int temp;
    for (size_t i = 0; i < s-1; i++)
    {
        for (size_t j = 0; j < s-i-1 ; j++)
        {
            if(a[j]>a[j+1])
           { temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
           }
        }
        
    }

}
void zSort(int* a,int* za,int s)
{
    int i,j,k;
    while(i<s)
    {
        i=0;
        j=s-1;
        k=0;
        while(j>=0)
        {   
            za[i]=a[k];
            i++;
            k++;
            za[i]=a[j];
            i++;
            j--;

        }
    }
    

}
void showzSort(int* za,int size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout<<za[i]<<" ";
    }
    
}


int main()
{

    // 8 8 4 1 3 5 6 2 1 3 6 8 2  5
    //1 8 1 8 2 8 2 6 3 6 3 5 4
    int size;
    cin>>size;
    int arr[size];
    int zarr[size];
    input(arr,size);
    bubbleSort(arr,size);
    zSort(arr,zarr,size);
   showzSort(zarr,size);


}
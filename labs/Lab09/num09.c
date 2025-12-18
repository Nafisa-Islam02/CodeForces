#include <stdio.h>

int main() 
{    
    
    int temp;
    int arr[14]={-4,8,-5,-6,5,-9,7,1,-21,-11,19,-7,-9,-8};
    printf("The given array is: ");
    for (size_t i = 0; i < 14; i++)
    {
       printf("%d ",arr[i]);
    }
        
    
    
    
    for (size_t i = 0; i < 14; i++)
        {
            if(arr[i]<0)
            {
                if(arr[i+1]<0)
                {
                    temp=arr[i+1];
                    arr[i+1]=arr[i+2];
                    arr[i+2]=temp;
                }
            }

            else

            {

                if(arr[i+1]>0)
                {
                    temp=arr[i+1];
                    arr[i+1]=arr[i+2];
                    arr[i+2]=temp;
                }
            }
        }
        
        printf("\nThe rearranged array is: ");
        for (size_t i = 0; i < 13; i++)
        {
            printf("%d ",arr[i]);
        }
    
    
    
    return 0;
}
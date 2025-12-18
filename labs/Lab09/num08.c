//Write a program in C to print all possible combinations of r elements in a given array.

#include <stdio.h>

int main() 
{    
    
    int temp;
    int arr[7]={1,5,4,6,8};
    printf("The given array is: ");
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
  printf("\nThe combination from by the number of elements are: 5\n");

    printf("The combinations are:\n");
    for (size_t j = 0; j < 5; j++)
    {
        temp=arr[j];

    for (size_t i = 0; i < 5; i++)
    { 
        if(temp!=arr[i])
        {
        printf("%d ",arr[i]);
        }
    }
     printf("\n");
    }
    

    return 0;
}
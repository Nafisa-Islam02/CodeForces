// 7. Write a program in C to count all distinct pairs for a specific difference.

#include <stdio.h>
int main() 
{    
    int diff,size,count=0;
    int arr1[100]={0};
   
    printf("Input the common value difference: ");
    scanf("%d",&diff);
    printf("Input the size of an array: ");
    scanf("%d",&size);
    int arr[size];

    for (size_t i = 0; i < size; i++)
    {
        printf("element - %d: ",i);
        scanf("%d",&arr[i]);
    }
    // 3 3 4 5 6
    
    for (size_t i = 0; i < size; i++)
    {
        arr1[arr[i]]++;// 8 , 9 ,12, 33 1,1,1
        //0 0  2 1 1 1 
    }
 
    for (int i = 0; i < 100; i++) {
        if (arr1[i] > 0) {
            int j = i + diff;
            if (j >= 0 && j < 100 && arr1[j] > 0)
            {
                count++;
            }
        }
    }
    
    printf("Number of distinct pairs for difference %d is : %d",diff,count);

    return 0;

if (condition)
{
    /* code */
}

    
}
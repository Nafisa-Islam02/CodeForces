#include <stdio.h>

int main() 
{    
    int num,sum=0,temp;
    int given_num=35;
    int arr[10]={3, 7 ,1 ,9 ,15 ,14 ,6 ,2 ,5 ,7};
    printf("The given array is: ");
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nThe elements are: ");
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            for (int k = j + 1; k < 10; k++) {
                for (int l = k + 1; l < 10; l++) {
                    //printf("i=%d, j=%d k=%d l=%d\n",arr[i],arr[j],arr[k],arr[l]);
                    if (arr[i] + arr[j] + arr[k] + arr[l] == given_num) 
                    {
                        printf("%d, %d, %d, %d.\n", arr[i], arr[j], arr[k], arr[l]);
                        return 0;
                    }
                }
            }
        }
    }

        
   
    printf("No combination found.\n");

    return 0;
}
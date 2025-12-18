#include <stdio.h>



int main() 
{    
    
    int arr[3]={66,77,88};;
    int*p=&arr[0];
   for (size_t i = 0; i < 3; i++)
   {
    printf("element - %d: %d \n",i,*p);
    p=p+1;
   }
      
    
    return 0;
}
#include <stdio.h>

void myFunction(int*p,int num);

int main() 
{    
 
 int num;
 printf("Input the number of elements to store in the array: ");
 scanf("%d",&num);
 int arr[num];
 printf("Input %d number of elements in the array :\n",num);
 
 
 for (size_t i = 0; i < num; i++)
 {
    printf("element - %d: ",i);
    scanf("%d",&arr[i]);
 }
 
  myFunction(&arr[0],num);
 
    return 0;
}

void myFunction(int* p,int num)
{ 

    for (size_t i = 0; i < num; i++)
 {
     printf("%d ",*p); 
     p=p+1;
 }
 
} 
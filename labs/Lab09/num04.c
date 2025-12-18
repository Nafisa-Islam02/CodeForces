#include <stdio.h>

int * myFunction(int * ptr1, int* ptr2);



int main() 
{    

 int a,b;
  printf("Input the first number : "); 
  scanf("%d",&a);
  printf("Input the second number : "); 
  scanf("%d",&b);
  int* ptr1,*ptr2;
  ptr1=&a;
  ptr2=&b;
  
  printf("The number %d is larger.",*(myFunction(ptr1,ptr2)));
 
 
  return 0;
}


int * myFunction(int * ptr1, int* ptr2)
{ 
 
 if(*ptr1>*ptr2)
 {
    return ptr1;
 }
 return ptr2;
 
} 
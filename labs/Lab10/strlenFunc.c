#include <stdio.h>

int my_strlen(char name[]);

int main() 
{   
   
 char name[80];
 printf("Enter your full name: ");
 fgets(name,sizeof(name),stdin);
 printf("the length of the string is %d\n",my_strlen(name));
 return 0;
}


int my_strlen(char name[])
{ 
 
 
 int i=0;
 while(name[i]!='\0')
{
    i++;
}
 
return i;

} 
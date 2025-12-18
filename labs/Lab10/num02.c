//2. Write a program in C to print individual characters of a string in reverse order.

#include <stdio.h>
#include<string.h>

int main() 
{    
    char name[200];
    printf("Enter your full name: ");
    fgets(name,sizeof(name),stdin);
    int len=strlen(name);

    for (size_t i = 0; name[i]!='\0'; i++)
  {
    if(name[i]=='\n')
    {
        name[i]='\0';
    }
  }
   for (int i = len; i >=0 ; i--)
   {
        printf("%c",name[i]);
   }
     return 0;
}


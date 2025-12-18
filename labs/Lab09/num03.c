#include <stdio.h>
#include<string.h>

void myFunction(char * p,int len);

int main() 
{    
 char str[100];
 printf("Input a string: "); 
 fgets(str,sizeof(str),stdin);
 str[strlen(str)-1]='\0';
 int len=strlen(str);
 myFunction(&str[0],len);

 return 0;
}

void myFunction(char * p,int len)
{ 
 int count=0;
for (size_t i = 0; i < len ; i++)
{
    if (*p=='a' ||*p=='e' || *p=='i' ||*p=='o'  ||*p=='u')
    {
        count++;
    }
    p=p+1;
}
printf("Number of vowels : %d\n",count);
printf("Number of constants : %d\n",len-count);


} 
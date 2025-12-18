#include <stdio.h>
#include<string.h>

int  my_strcmp(char str1[],char str2[]);


int main() 
{    
    
 char string1[100],string2[100];
 printf("Input a string: ");
 fgets(string1,sizeof(string1),stdin);
 
 size_t len = strlen(string1);
if (len > 0 && string1[len - 1] == '\n') 
{
    string1[len - 1] = '\0';
}

 printf("Input another string: ");
 fgets(string2,sizeof(string2),stdin);
 if(my_strcmp(string1,string2)!=0)
 {
 printf("The strings are not equal\n");
 }
 else
 {
    printf("The strings are equal\n");
 }
 
    return 0;
}


int  my_strcmp(char str1[],char str2[])
{ 
 int i=0;
 
 while(str1[i]!='\0' && str2[i]!='\0')
 {
    if(str1[i]!=str2[i])
    {
        return str1[i]-str2[i];
    }
    i++;
} 
    return str1[i]-str2[i];
}

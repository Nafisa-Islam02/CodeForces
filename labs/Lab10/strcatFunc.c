#include <stdio.h>

void my_strcat(char str1[],char str2[]);
//void remove_newline(char str[]);

int main() 

{    
 char string1[20];
 char string2[20];
 printf("Enter a string no.1= ");
 fgets(string1,sizeof(string1),stdin);
 printf("Enter a string no.2= ");
 fgets(string2,sizeof(string2),stdin);
 //remove_newline(string1);
 //remove_newline(string2);
 my_strcat(string1,string2);
 printf("Concatenated string: %s\n",string1);
    return 0;
}

void my_strcat(char str1[],char str2[])
{ 
 
 int i=0,j=0;
  for (size_t i = 0; str1[i]!='\0'; i++)
  {
    if(str1[i]=='\n')
    {
        str1[i]='\0';
    }
  }
 while(str1[i]!='\0')
 {
    i++;
 }

 while(str2[j]!='\0')
 {
    str1[i]=str2[j];
    i++;
    j++;
 }
  str1[i]='\0';
 
}

/*void remove_newline(char str[]) 
{
    int i = 0;
    while (str[i] != '\0') 
    {
        if (str[i] == '\n') 
        {
            str[i] = '\0';
        }
        i++;
    }
}*/
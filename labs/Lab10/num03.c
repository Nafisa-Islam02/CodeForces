//3.Write a program in C to count the total number of words in a string.
#include <stdio.h>
#include<string.h>

int main() 
{    
    int i=0,count=0;
    char name[100];
    printf("Enter a string: ");
    fgets(name,sizeof(name),stdin);
    int len=strlen(name);
     
    for (size_t i = 0; i < len; i++)
    { 
        if(name[i+1]==32 || name[i+1]=='\0' || name[i+1]=='\n')
        {
            if(name[i]!=32 && name[i]!='\0' && name[i]!='\n')
            {count++;}
        
    }
}
    printf("The total number of words in the string is: %d",count);
    return 0;
}



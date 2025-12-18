#include <stdio.h>
#include<string.h>

void my_strcopy(char dest[],char src[]);

int main() 
{
    char str1[100], str2[100];
    int len1,len2;
    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    len1 = strlen(str1);
    if (len1 > 0 && str1[len1 - 1] == '\n') str1[len1 - 1] = '\0';

    len2 = strlen(str2);
    if (len2 > 0 && str2[len2 - 1] == '\n') str2[len2 - 1] = '\0';

    my_strcopy(str1,str2);

    printf("Copied string: %s\n", str1);

    return 0;
}

void my_strcopy(char dest[], char src[]) 
{
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

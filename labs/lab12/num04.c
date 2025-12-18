#include <stdio.h>
#include <string.h>

int main() {
    FILE *fptr;
    char lines[100][200];
    int count = 0;

    fptr = fopen("test.txt", "r");

    while (fgets(lines[count], sizeof(lines[count]), fptr)) 
    {
        count++;
    }

    fclose(fptr);

    printf("File content stored in array:\n");
    for (int i = 0; i < count; i++) 
    {
        printf("%s", lines[i]);
    }

    return 0;
}

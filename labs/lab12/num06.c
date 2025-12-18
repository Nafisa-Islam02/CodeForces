#include <stdio.h>
#include <string.h>

int main() {
    FILE *fptr, *temp;
    char buffer[200], filename[50], newline[200];
    int line, count = 0;

    printf("Input the file name to be opened: ");
    scanf("%s", filename);

    fptr = fopen(filename, "r");

    temp = fopen("temp.txt", "w");
  
    printf("Input the line no you want to replace: ");
    scanf("%d", &line);
    getchar(); 
    printf("Input the content of the new line: ");
    fgets(newline, sizeof(newline), stdin);

    while (fgets(buffer, sizeof(buffer), fptr)) {
        count++;
        if (count == line) {
            fputs(newline, temp);
        } else {
            fputs(buffer, temp);
        }
    }

    fclose(fptr);
    fclose(temp);

    remove(filename);
    rename("temp.txt", filename);

    printf("Replacement did successfully..!!\n");
    return 0;
}

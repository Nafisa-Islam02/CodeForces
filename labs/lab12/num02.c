#include <stdio.h>

int main() {
    FILE *fptr;
    char ch;

    fptr = fopen("test.txt", "r");

    while ((ch = fgetc(fptr)) != EOF) {
        putchar(ch);
    }

    fclose(fptr);
    return 0;
}

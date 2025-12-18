#include <stdio.h>
#include <ctype.h>

int main() {==
    FILE *fptr;
    char ch;
    int words = 0, chars = 0, inWord = 0;

    fptr = fopen("test.txt", "r");

    while ((ch = fgetc(fptr)) != EOF) {
        chars++;
        if (isspace(ch)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;
        }
    }

    fclose(fptr);

    printf("Characters: %d\nWords: %d\n", chars, words);
    return 0;
}

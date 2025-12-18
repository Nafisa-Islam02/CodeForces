#include <stdio.h>

int main() {
    FILE *fptr;
    char sentence[200];

    fptr = fopen("test.txt", "w");

    printf("Input a sentence for the file: ");
    fgets(sentence, sizeof(sentence), stdin);

    fprintf(fptr, "%s", sentence);
    fclose(fptr);

    printf("The file test.txt created successfully...!!\n");
    return 0;
}

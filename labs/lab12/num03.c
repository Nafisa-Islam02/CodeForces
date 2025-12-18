#include <stdio.h>

int main() {
    FILE *fptr;
    char line[200];
    int n;

    fptr = fopen("test.txt", "w");

    printf("Enter number of lines: ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        printf("Enter line %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        fputs(line, fptr);
    }

    fclose(fptr);
    printf("Data written successfully!\n");
    return 0;
}

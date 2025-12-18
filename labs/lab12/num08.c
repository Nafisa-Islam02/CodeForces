#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *fptr;
    char name[100], dept[100], roll[50];
    int vowels = 0, consonants = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; 

    printf("Enter your department: ");
    fgets(dept, sizeof(dept), stdin);
    dept[strcspn(dept, "\n")] = '\0';

    printf("Enter your roll number: ");
    fgets(roll, sizeof(roll), stdin);
    roll[strcspn(roll, "\n")] = '\0';


    fptr = fopen("student.txt", "w");

    fprintf(fptr, "%s\n%s\n%s\n", name, dept, roll);
    fclose(fptr);


    for (int i = 0; name[i] != '\0'; i++) {
        char ch = tolower(name[i]);
        if (isalpha(ch)) {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    fptr = fopen("student.txt", "a");
   
    fprintf(fptr, "Vowels: %d, Consonants: %d\n", vowels, consonants);
    fclose(fptr);

    printf("Data written and appended successfully!\n");
    return 0;
}

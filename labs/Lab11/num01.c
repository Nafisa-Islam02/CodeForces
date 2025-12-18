#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float totalMarks;
};

int main() {
    struct Student s[2];
    float avg;

    for(int i=0; i<2; i++) {
        printf("Enter name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        printf("Enter age: ");
        scanf("%d", &s[i].age);
        printf("Enter total marks: ");
        scanf("%f", &s[i].totalMarks);
        getchar();
    }

    avg = (s[0].totalMarks + s[1].totalMarks) / 2;

    for(int i=0; i<2; i++) {
        printf("\nStudent %d\n", i+1);
        printf("Name: %s", s[i].name);
        printf("Age: %d\n", s[i].age);
        printf("Total Marks: %.2f\n", s[i].totalMarks);
    }
}

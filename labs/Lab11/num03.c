#include <stdio.h>

enum grade {A=90, B=80, C=70, D=60, F=0};

int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if(marks>=A) printf("Grade: A\n");
    else if(marks>=B) printf("Grade: B\n");
    else if(marks>=C) printf("Grade: C\n");
    else if(marks>=D) printf("Grade: D\n");
    else printf("Grade: F\n");

    return 0;
}
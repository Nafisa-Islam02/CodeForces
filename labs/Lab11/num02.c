/*#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    float cost;
};

int main() {
    struct Book b1, b2, b3;
    struct Book *highest, *lowest;

    printf("Enter title of first book: ");
    fgets(b1.title, sizeof(b1.title), stdin);
    if(b1.title[(strlen(b1.title)-1)]=='\n')
    {b1.title[strlen(b1.title)-1] = '\0';}
    printf("Enter price: ");
    scanf("%f", &b1.cost);
    getchar();

    printf("\nEnter title of second book: ");
    fgets(b2.title, sizeof(b2.title), stdin);
     if(b1.title[(strlen(b2.title)-1)]=='\n')
    {b2.title[strlen(b2.title)-1] = '\0';}
    printf("Enter price: ");
    scanf("%f", &b2.cost);
    getchar();

    printf("\nEnter title of third book: ");
    fgets(b3.title, sizeof(b3.title), stdin);
    if(b3.title[(strlen(b3.title)-1)]=='\n')
    {b3.title[strlen(b3.title)-1] = '\0';}
    printf("Enter price: ");
    scanf("%f", &b3.cost);

    highest = &b1;
    lowest = &b1;

    if (highest->cost < b2.cost) highest = &b2;
    if (lowest->cost > b2.cost) lowest = &b2;

    if (highest->cost < b3.cost) highest = &b3;
    if (lowest->cost > b3.cost) lowest = &b3;

    printf("\nMost Expensive Book:\nTitle: %s\nPrice: %.2f\n", highest->title, highest->cost);
    printf("\nLeast Expensive Book:\nTitle: %s\nPrice: %.2f\n", lowest->title, lowest->cost);

    return 0;
}*/
#include <stdio.h>
#include<string.h>
struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book b[3];
    int max=0, min=0;

    for(int i=0; i<3; i++) {
        printf("Enter title: ");
        fgets(b[i].title, sizeof(b[i].title), stdin);
        if(b[i].title[(strlen(b[i].title)-1)]=='\n')
    {b[i].title[strlen(b[i].title)-1] = '\0';}
        printf("Enter author: ");
        fgets(b[i].author, sizeof(b[i].author), stdin);
          if(b[i].author[(strlen(b[i].author)-1)]=='\n')
    {b[i].author[strlen(b[i].author)-1] = '\0';}
        printf("Enter price: ");
        scanf("%f", &b[i].price);
        getchar();
    }

    for(int i=1; i<3; i++) {
        if(b[i].price > b[max].price) max=i;
        if(b[i].price < b[min].price) min=i;
    }

    printf("\nMost Expensive: %s by %s (%.2f)\n", b[max].title, b[max].author, b[max].price);
    printf("Lowest Priced: %s by %s (%.2f)\n", b[min].title, b[min].author, b[min].price);

    return 0;
}


#include <stdio.h>
#include<string.h>

struct Employee
{
    int ID;
    char name[100];
    double salary;

};

int main() 
{    
    struct Employee e1;
    struct Employee e2;
    struct Employee e3;
    struct Employee *low,*high;
    printf("Input information for employee 1:\n");
    printf("enter the name: ");
    fgets(e1.name,sizeof(e1.name),stdin);
    if(e1.name[strlen(e1.name)-1]=='\n')
    {
        e1.name[strlen(e1.name)-1]='\0';
    }

    printf("Enter Id no: ");
    scanf("%d",&e1.ID);
    
    printf("Enter salary: ");
    scanf("%lf",&e1.salary);
    getchar();

    printf("Input information for employee 2:\n");
    printf("enter the name: ");
    fgets(e2.name,sizeof(e2.name),stdin);
    if(e2.name[strlen(e2.name)-1]=='\n')
    {
        e2.name[strlen(e2.name)-1]='\0';
    }

    printf("Enter Id no: ");
    scanf("%d",&e2.ID);

    printf("Enter salary: ");
    scanf("%lf",&e2.salary);
    getchar();

   
      printf("Input information for employee 3:\n");
    printf("enter the name: ");
    fgets(e3.name,sizeof(e3.name),stdin);
    if(e3.name[strlen(e3.name)-1]=='\n')
    {
        e3.name[strlen(e3.name)-1]='\0';
    }

    printf("Enter Id no: ");
    scanf("%d",&e3.ID);

    printf("Enter salary: ");
    scanf("%lf",&e3.salary);
    getchar();

   


    low=&e1;

    high=&e1;
    if(high -> salary<e2.salary) high=&e2;
    if(low -> salary>e2.salary) low=&e2;
   
    if(high -> salary<e3.salary) high=&e3;
    if(low -> salary>e3.salary) low=&e3;
    printf("The highest salary is: %lf\nThe lowest salary is: %lf",high->salary,low->salary);
    return 0;
}
#include<stdio.h>
struct people{
    char name[20];
    int age;
    char address [30];
}p[100];
int main()
{
    int i=0;
    for(i=0;i<=99;i++){
        printf("Enter the details of people %d:\n",i+1);
        printf("\nEnter the name:\n");
        fgets(p[i].name,20,stdin);
        fflush(stdin);
        printf("Enter the address:\n");
        fgets(p[i].address,20,stdin);
        fflush(stdin);
        printf("Enter the age:\n");
        scanf("%d",&p[i].age);
        
        }
    for(i=0;i<=99;i++){
        if(p[i].age>25){
            printf("The details of the people whose age greater than 25;\n");
            printf("Name: %s",p[i].name);
            printf("Age: %d",p[i].age);
            printf("Address: %s",p[i].address);
        }
    }
    return 0;
}
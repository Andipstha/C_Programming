/*	WAP to enter records in a file with members as id, name and salary. 
    Develop a program to read the file and find out employee highest salary.
*/
#include<stdio.h>
struct emp{
    char name[20];
    int id;
    int salary;
}s[4];
int main(){
    int i,j,temp;
    FILE *p;
    p=fopen("employee.txt","w+");
    if(p==NULL){
        printf("File doesnot exits.");
    }
    for(i=0;i<=3;i++){
        printf("Enter the detail of %d employee.\n",i+1);
        printf("Enter the name of the employee.\n");
        fgets(s[i].name,20,stdin);
        fflush(stdin);
        printf("Enter the id of the employee.\n");
        scanf("%d",&s[i].id);
        fflush(stdin);
        printf("Enter the salary of the employee.\n");
        scanf("%d",&s[i].salary);
        fflush(stdin);
    }
    fwrite(s,sizeof(s),1,p);
    fclose(p);
    p=fopen("employee.txt","r+");
    fread(s,sizeof(s),1,p);
    for(i=0;i<=3;i++){
        printf("Name=%s\n",s[i].name);
        printf("ID=%d\n",s[i].id);
        printf("salary=%d\n",s[i].salary);
    }
    for(i=0;i<=4;i++){
        for(j=0;j<=4;j++){
            if(s[i].salary<s[j].salary){
            temp=s[i].salary;
            s[i].salary=s[j].salary;
            s[j].salary=temp;
        }
        }
    }
    printf("The highest salary paid to the employee is %d",s[4].salary);
    return 0;

}
#include<stdio.h>
int main()
{
    FILE *p;
    p=fopen("abc.txt","w+");
    if(p==NULL)
    {
        printf("FILE WAS NOT FOUND");
    }
    else
    {
        printf("FILE WAS SUCCESSFULLY OPENED");
    }
    fclose(p);
    return 0;
}
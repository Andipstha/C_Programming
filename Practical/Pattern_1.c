#include<stdio.h>
int main()
{
    int i=0,j=0,k=0;
    for(i=1;i<=4;i++) //row
    {
        for(k=1;k=4-i;k++)//space
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++) //colum
        {
            printf(" *");
        }
        printf("\n");
    }
}
#include<stdio.h>
int main()
{
    int a,r,c,sum =0,temp;
    printf("Enter the the you want to check weather its armstrong or not.\n");
    scanf("%d",&a);
    temp=a;
    while(a>0){
        r=a%10;
        c=r*r*r;
        sum=sum+c; 
        a=a/10;
    }
    if (sum ==temp){
        printf("The number is armstrong number.");
    }
    else {
        printf("The number is not a armstrong number.");
    }
    return 0;


}
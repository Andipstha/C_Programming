#include<stdio.h>
int main()
{
    int a=0,r=0,sum=0,temp =0;
    printf("Enter the number you want to check wheather the number is palindrome or not.\n");
    scanf("%d",&a);
    temp=a;
    while (a>0){
        r=a%10;
        sum=sum*10+r;
        a=a/10;
    }
    if (temp==sum){
         printf("The number is palindrome number.");
    }
    else {
        printf("The number is not a palindrome number.");
    }
    return 0;

}

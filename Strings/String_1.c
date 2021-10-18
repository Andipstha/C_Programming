/*	WAP to print ASCII values of each and every character of
    the string given by the user.
*/
#include<stdio.h>
int main()
{
    char a[10];
    int i=0;
    printf("Enter the string.\n");
    for(i=0;i<=9;i++){
        scanf("%s",&a[i]);
    }
    for(i=0;i<=9;i++){
        printf("The ASCII Value of the String %c is = %d",a[i],a[i]);
        printf("\n");
    }

    return 0; 
    
}
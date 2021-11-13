/* Write a program using DMA to take 10 numbers from user and only display numbers which aren’t prime*/
#include<stdio.h>
int main(){
    int a[10],i,j,rem,count;
    int *p;
    p=a;
    p=(int*)malloc(10*sizeof(int));
    printf("Enter the integers:\n");
    for(i=0;i<=9;i++){
        scanf("%d",p+i);
    }
    printf("The non prime numbers are as follows:\n");
    for(i=0;i<=9;i++){
        for(j=2;j<=*(p+i);j++){
            if(*(p+i)%j==0){
                count++;
            }
            
        }
        if(count>2){
            printf("%d",*(p+i));
        }

    }


}
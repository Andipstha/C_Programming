
#include<stdio.h>
int main()
{

int sum = 0, n;
int a = 0;
int b = 1;
printf("Enter the nth value: \n");
scanf("%d", &n);
printf("Fibonacci series: \n");
while(sum <= n)
{
printf("%d ", sum);
a = b; 
b = sum;
sum = a + b; 
}
return 0;
}


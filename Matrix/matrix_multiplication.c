#include<stdio.h>
int main()
{
  int m=0, n=0, p=0, q=0, c=0, d=0, k=0, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
 
  printf("Enter number of rows and columns of first matrix\n");  
  scanf("%d%d", &m, &n);  

  printf("Enter elements of first matrix\n");
 
  for (c = 0; c < m; c++)   
  {
    for (d = 0; d < n; d++)
      {
	  scanf("%d", &first[c][d]);
      }
  }
	
 flag:
  printf("Enter number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);   
  if (n != p)
   {
    printf("The multiplication isn't possible.Please try again\n");
    goto flag;
   }
	
 else
  {
    printf("Enter elements of second matrix\n");
 
    for (c = 0; c < p; c++)  
      for (d = 0; d < q; d++)
        scanf("%d", &second[c][d]);
 
    for (c = 0; c < m; c++)   
    {
      for (d = 0; d < q; d++) 
       {
        for (k = 0; k < p; k++) 
         {
          sum = sum + first[c][k]*second[k][d];
         }
         multiply[c][d] = sum;
         sum = 0;
       }
    }
 
    printf("Product of the matrices:\n"); 
 
    for (c = 0; c < m; c++)  
     {
      for (d = 0; d < q; d++)
       {
        printf("%d\t", multiply[c][d]);
       }
      printf("\n");
     }
  }  
  return 0;
}
#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],pro[100][100];
    int ar,ac,br,bc,sum=0;
    int i,j,k;
    printf("Enter the name of rows and column for matrics 1:\n");
    scanf("%d%d",&ar,&ac);
    printf("Enter the elements of the matrices 1:\n");
    for(i=0;i<ar;i++){
        for(j=0;j<ac;j++){
            scanf("%d",&a[i][j]);
        }
    }
    flag:
    printf("Enter the name of rows and column for matrics 2:\n");
    scanf("%d%d",&br,&bc);
    if(ac!=br){
        printf("The matrices cannot be multiplied.\n ");
        goto flag;
    }
    printf("Enter the elements of the matrices 1:\n");
    for(i=0;i<br;i++){
        for(j=0;j<bc;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for (i=0;i<ar;i++){
        for(j=0;j<bc;j++){
            for(k=0;k<br;k++){
                sum  = sum+(a[i][k]*b[k][j]);
            }
            pro[i][j]=sum;
            sum=0;
        }
    }
    printf("The product of the matrices are:\n");
    for(i=0;i<ar;i++){
        for(j=0;j<bc;j++){
            printf("%d",pro[i][j]);
        }
    }
    
    
}
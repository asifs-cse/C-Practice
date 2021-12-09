#include<stdio.h>
int main(){

    int a[10][10], b[10][10], mul[10][10], r, c, i,j,k;
    printf("Enter the number of row: ");
    scanf("%d",&r);
    printf("Enter the colum: ");
    scanf("%d",&c);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter the matrix a %d %d row and colum value: ",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter the matrix b %d %d row and colum value: ",i,j);
            scanf("%d",&b[i][j]);
        }
        
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            mul[i][j]=0;
            for (k = 0; k < c; k++)
            {
                mul[i][j] += a[i][k]*b[k][j];
            }
            printf("%d \t",mul[i][j]);
        }
        printf("\n");
    }
    
    
}
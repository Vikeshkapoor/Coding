//Write a C program to print the transpose of a matrix. 
#include<stdio.h>
int main()
{
    int i,j,r,c,a[10][10];
    printf("Enter no. of rows for matrix : ");
    scanf("%d",&r);
    printf("Enter no. of columns for matrix : ");
    scanf("%d",&c);
    printf("\n\t\t\tEnter values\t\t\t\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter %d%d value : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\t\tTranspose of matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t\t",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
//6.Program to perform 3X3 matrix addition, subtraction, multiplication and division
#include<stdio.h>
int main()
{
    int n,m,p,q,i,j,k,sum,a[10][10],b[10][10],c[10][10];
    printf("Enter value of n and m \n");
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("Enter %d%d value : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter value of p and q \n");
    scanf("%d%d",&p,&q);
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("Enter %d%d value : ",i,j);
            scanf("%d",&a[p][q]);
        }
    }
    if(m==p)
    {
        printf("Multiplication of Matrix\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<q;j++)
            {
                sum=0;
                for(k=0;k<m;k++)
                {
                    sum+=(a[i][k]*b[k][j]);
                }
                c[i][j]=sum;
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<q;j++)
            {
                 printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    



}
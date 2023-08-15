#include <stdio.h>
int main()
{
    int n, m, p, q, i, j,k, a[10][10], b[10][10], c[10][10],sum=0;
    printf("Enter now of rows for 1st matrix :");
    scanf("%d", &n);
    printf("Enter now of columns for 1st matrix :");
    scanf("%d", &m);
    printf("\t\t\tEnter values\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter now of rows for 2nd matrix :");
    scanf("%d", &p);
    printf("Enter now of columns for 2nd matrix :");
    scanf("%d", &q);
    if (m == p)
    {
        printf("\t\t\tEnter values\n");

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        printf("Matrix multiplication\n");
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
                printf("%d\t\t",c[i][j]);
            }              
            printf("\n");
        }
    }
}
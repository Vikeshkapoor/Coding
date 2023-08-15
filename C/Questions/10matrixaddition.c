#include <stdio.h>
int main()
{
    int i, j, a[10][10], b[10][10], c[10][10], n, m, p, q;
    printf("Enter no. of rows for A : "); //this is for taking values of 1st matrix
    scanf("%d", &n);
    printf("Enter no. of columns for A : ");
    scanf("%d", &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Enter %d%d value : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter no. of rows for B : ");  //this is for taking values of 2st matrix
    scanf("%d", &p);
    printf("Enter no. of columns for B : ");
    scanf("%d", &q);
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("Enter %d%d value : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\t\t\tMATRIX ADDITION\t\t\t\n");
    if (n == p && m == q)             //this is for adding matrix
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }
    }
    else
    {
        printf("\nNo. of rows and columns must be same in A and B\n");
    }
    for (i = 0; i < n; i++)                 //this is for printing added values
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t\t\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
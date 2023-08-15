/*#include<stdio.h>
int main()
{
    int n,m,p,q,i,j,a[10][10],b[10][10],c[10][10];
    printf("\nEnter no. of rows for A matrix : ");
    scanf("%d",&n);
    printf("Enter no. of columns for A matrix : ");
    scanf("%d",&m);
    printf("\n\t\t\t\tENTER VALUES\t\t\t\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("Enter %d%d value : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter no. of rows for B matrix : ");
    scanf("%d",&p);
    printf("Enter no. of columns for B matrix : ");
    scanf("%d",&q);
    printf("\n\t\t\t\tENTER VALUES\t\t\t\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("Enter %d%d value : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    if(n==p && m==q)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        printf("\n\t\t\tMATRIX ADDITION\t\t\t\n\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t\t\t",c[i][j]);
        }
        printf("\n");
    }

    }
    else{
        printf("\nRow and column must be same for both A and B\n\n");
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    int n,m,p,q,a[10][10],b[10][10],c[10][10],i,j;
    printf("\nEnter no. of rows for A matrix : ");
    scanf("%d",&n);
    printf("\nEnter no. of columns for A matrix : ");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("Enter %d%d value ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter no. of rows for B matrix : ");
    scanf("%d",&p);
    printf("\nEnter no. of columns for B matrix : ");
    scanf("%d",&q);
    if(p==n &&m==q)
    {
        for(i=0;i<n;i++)
        {
          for(j=0;j<m;j++)
          {
            printf("Enter %d%d value ",i,j);
            scanf("%d",&b[i][j]);
          }
        }
    }
    else{
        printf("Rows and columns in a and b matrix should be same\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t\t\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
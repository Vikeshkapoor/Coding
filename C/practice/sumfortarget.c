#include<stdio.h>
int main()
{
    int n,a[100],i,target,j;
    printf("Enter total no. of values you want to enter : ");
    scanf("%d",&n);
    printf("Enter target sum : ");
    scanf("%d",&target);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==target)
            {
                printf("[%d , %d]",i,j);
            }
        }
    }
    return 0;
}
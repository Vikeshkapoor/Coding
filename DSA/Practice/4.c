#include<stdio.h>
int main()
{
    int i,j,n,a[100],temp;
    printf("Enter value of n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d value : ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("Value %d = %d\n",i+1,a[i]); 
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nAscending order\n");
    for(i=0;i<n;i++)
    {
        printf("Value %d = %d\n",i+1,a[i]); 
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nDescending order\n");
    for(i=0;i<n;i++)
    {
        printf("Value %d = %d\n",i+1,a[i]); 
    }
}
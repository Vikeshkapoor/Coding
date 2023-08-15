#include<stdio.h>
int main()
{
    int i,n,a[100],max,min;
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
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("Max = %d\n",max);
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }        
    }
    printf("Min =%d",min);
}
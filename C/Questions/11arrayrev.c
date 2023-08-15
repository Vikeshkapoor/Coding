#include<stdio.h>
void arrayrev(int n)
{
    int i,a[100];
    for(i=n-1;i>=0;i--)
    {
        printf("%d,",a[i]);
    }
    
}

int main()
{
    int i,n,a[100];
    printf("Enter No. of values you want to enter : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d value : ",i);
        scanf("%d",&a[i]);
    }
    
    arrayrev(n);
    

    return 0;
}
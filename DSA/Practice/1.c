#include<stdio.h>
int main()
{
    int i=0,n,a[100];
    printf("Enter value of n: ");
    scanf("%d",&n);
    while(i<n)
    {
        printf("Enter %d value : ",i+1);
        scanf("%d",&a[i]);
        i++;
    }
    for(i=0;i<n;i++)
    {
        printf("Value %d = %d\n",i+1,a[i]); 
    }
}
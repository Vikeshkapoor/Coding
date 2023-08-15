#include<stdio.h>
int main()
{
    int i,a[100],b[100],n;
    printf("Enter no. values you want to enter : ");
    scanf("%d",&n);
    printf("Enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            b[i]=a[i];
            printf("%d\n",b[i]);
        }
    }
    return 0;
}

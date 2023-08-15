/*#include<stdio.h>
int main()
{
    int n,i,rev[100];
    printf("\nEnter no. of values you want to enter : ");
    scanf("%d",&n);
    printf("\n\t\t\tENTER VALUES\t\t\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&rev[i]);
    }
    printf("\n\t\tReversed values\t\t\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",rev[i]);
    }

    return 0;
}*/
#include<stdio.h>
int main()
{
    int n,i,a[100];
    printf("Enter how many values you want to enter : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d value = ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Reversed values\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
//Write a C program to print the reverse of an array
#include<stdio.h>
int main()
{
    int i,n,a[100];
    printf("Enter how many values you want to enter : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d value : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n\t\tReversed array values\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d,",a[i]);
    }
    return 0;

}
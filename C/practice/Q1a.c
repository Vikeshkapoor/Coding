//Write a C Program to find the number of ODD numbers, even numbers and zeros in array elements
#include<stdio.h>
int main()
{
    int n,i,oddcount=0,evencount=0,zerocount=0,a[100];
    printf("How many values you want to enter : ");
    scanf("%d",&n);
    printf("\n\t\tEnter elements\t\t\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            zerocount++;
        }
        else if(a[i]%2==0)
        {
             evencount++;
        }       
        else{
            oddcount++;
        }
    }
    printf("%d,%d,%d",zerocount,evencount,oddcount);
    return 0;
}

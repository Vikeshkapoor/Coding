//15.	Write a C program to find the sum of the N natural numbers. Accept the value of n from the user.
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter no. till you want to add :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("Sum = %d",sum);
    return 0;
}
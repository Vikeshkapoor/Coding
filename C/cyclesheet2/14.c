//14.Write a recursive function program to find sum of n natural numbers.
#include<stdio.h>
int sum(int n)
{
    if(n>0)
    {
        return n+sum(n-1);
    }
}
int main()
{
    int n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    printf("Sum of %d natural numbers = %d",n,sum(n));
}
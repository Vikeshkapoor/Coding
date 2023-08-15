//Write a C program to find factorial of a given number. Accept input from the user
#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter no. to find it's factorial : ");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        fact*=i;
    }
    printf("Factorial = %d",fact);
    return 0;
}
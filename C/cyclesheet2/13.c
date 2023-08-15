//13.Write a recursive function program to find factorial of a given number
#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter no. to find its factorial : ");
    scanf("%d",&n);
    printf("Factorial of %d number = %d",n,fact(n));
}
int fact(int n)
{
    if(n>0)
    {
        return n*fact(n-1);
    }
    else{
        return 1;
    }
}
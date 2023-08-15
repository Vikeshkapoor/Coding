//Write a C program to find the sum of the digits using function (with argument with return type). Ex. The given input is 1223 and the desired output is 8.

#include<stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("Enter value : ");
    scanf("%d",&n);
    sum(n);
}
int sum(int n)
{
    int i,add=0,d,a;
    for(i=n;i>0;i=i/10)
    {
        d=i%10;
        add+=d;
    }
    a=printf("Sum of digits = %d",add);
    return a;
}
//8.Write a function code to perform arithmetic calculation
#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b;
    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("Enter value of b : ");
    scanf("%d",&b);
    printf("Sum = %d",add(a,b));
}
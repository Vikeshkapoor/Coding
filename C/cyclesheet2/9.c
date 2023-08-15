//9.Write a code for 4 types of user defined function
#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int sub()
{
    printf("Subtraction of 6-2 = %d\n",6-2);
}
void mul(int a,int b)
{
    printf("Multiplication = %d\n",a*b);
}
void div()
{
    printf("Division = %d\n",6/2);
}
int main()
{
    int a=6,b=2;
    printf("A=%d\nB=%d\n",a,b);
    printf("Sum = %d\n",sum(a,b));
    sub();
    mul(a,b);
    div();
}
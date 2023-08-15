#include<stdio.h>
int factorial(int num)
{
    if(num==1 || num==0)
    {
        return 1;
    }
    else
    {
        return (num*factorial(num-1));
    }
}
int main()
{
    int value;
    printf("Enter the no. of which you want factoial : ");
    scanf("%d",&value);
    printf("The factorial of %d is %d ",value,factorial(value));
    return 0;
}


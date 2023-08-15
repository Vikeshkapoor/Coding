//Write a C program to find the biggest among three number using function (with argument with return type).
#include<stdio.h>
int big(int a,int b,int c);
int main()
{
    int a,b,c;
    printf("Enter three values : ");
    scanf("%d%d%d",&a,&b,&c);
    big(a,b,c);
}
int big(int a,int b,int c)
{
    int x,y,z;
    if(a>b && a>c)
    {
        x=printf("Biggest no. = %d",a);
        return x;
    }
    else if(b>a && b>c)
    {
        y=printf("Biggest no. = %d",b);
        return y;
    }
    else
    {
        z=printf("Biggest no. = %d",c);
        return z;
    }
}

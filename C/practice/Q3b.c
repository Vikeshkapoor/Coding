//Write a C program to find the area of rectangle using function (Without argument with return type).
#include<stdio.h>
float area();
int main()
{
    area();
    return 0;    
}
float area()
{
    float l,b,a;
    printf("Enter length of rectangle : ");
    scanf("%f",&l);
    printf("Enter breadth of rectangle : ");
    scanf("%f",&b);
    a=printf("Area of rectangle : %.2f",l*b);
    return a;
}
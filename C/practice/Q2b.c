//Write a C program to find the area of the circle using function (with argument without return type).
#include<stdio.h>
void area(float r);
int main()
{
    float r;
    printf("Enter radius of the circle : ");
    scanf("%f",&r);
    area(r);
}
void area(float r)
{
    float a;
    a=3.14*r*r;
    printf("Area of the circle = %.2f",a);
    
}
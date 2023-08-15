//12.Write a function code to generate area of triangle, rectangle, square and circle.
#include<stdio.h>
float tarea(int b,int h)
{
    return b*h*1/2;
}
int rarea(int l,int b)
{
    return l*b;
}
int sarea(int s)
{
    return s*s;
}
float carea(int r)
{
    return 3.14*r*r;
}
int main()
{
    int b=10,h=12,l=14,s=15,r=8;
    printf("\nArea of triangle = %f ",tarea(b,h));
    printf("\nArea of rectangle = %d ",rarea(l,b));
    printf("\nArea of square = %d ",sarea(s));
    printf("\nArea of circle = %f ",carea(r));
}
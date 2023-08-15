#include<stdio.h>
int main()
{
    int a;
    printf("Enter the year - ");
    scanf("%d",&a);
    if(a%4==0 || a%400==0 && a%100!=0)
    {
        printf("Yes,this is leap year");
    }
    else
    {
        printf("This is not a leap year");
    }
    return 0;
}
//11.Write a function code to read 2 numbers form the user and print the maximum number and minimum number
#include<stdio.h>
void check(int n,int m)
{
    if(n>m)
    {
        printf("Maximum = %d",n);
        printf("\nMinimum = %d",m);
    }
    else
    {
        printf("Maximum = %d",m);
        printf("\nMinimum = %d",n);
    }
}
int main()
{
    int n,m;
    printf("Enter value of n and m: ");
    scanf("%d%d",&n,&m);
    check(n,m);
}
#include<stdio.h>
int main()
{
    int n,i,d,sum=0;
    printf("Enter number : ");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        d=i%10;
        sum+=d;
    }
    printf("%d",sum);
}
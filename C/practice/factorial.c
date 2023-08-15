#include<stdio.h>
int main()
{
    int n,factorial=1;
    printf("enter no. of which you want factorial\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+1)
    {
        factorial*=i;
    }
    printf("Factorial of %d is %d ",n,factorial);
    return 0;
}

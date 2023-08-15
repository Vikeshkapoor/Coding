#include<stdio.h>
int main()
{
    int i,n,factorial=1;
    printf("enter no. that you want factorial of\n");
    scanf("%d",&n);
    if(n==0 || n==1)
    printf("%d",1);
    else{
    for(i=1;i<=n;i++)
    {
        factorial*=i;
    }
    printf("factorial of %d is %d",n,factorial);
    }
 return 0;
}
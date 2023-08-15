#include<stdio.h>
int main()
{
    int fact=1,i,n;
    printf("\nEnter no. to find its factorial : ");
    scanf("%d",&n);
    if(n==0 || n==1)
    {
        fact=1;
    }
    else{
        for(i=1;i<=n;i++)
        fact*=i;
    }
    printf("\nFactorial of %d is %d\n",n,fact);
    return 0;
}
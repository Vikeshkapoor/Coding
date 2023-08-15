//15.Write a recursive function code to calculate power using recursion
#include<stdio.h>
int power(int n,int p);
int main()
{
    int n,p;
    printf("Enter number : ");
    scanf("%d",&n);
    printf("Enter power number : ");
    scanf("%d",&p);
    printf("%d^%d = %d",n,p,power(n,p));
}
int power(int n,int p)
{
    if(p>0)
    {
        return n*power(n,p-1);
    }
    else{
        return 1;
    }
}
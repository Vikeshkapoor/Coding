#include<stdio.h>
int main()
{
    int n,i,a=0,b=1;
    printf("\nEnter no. till you want to print fibonacci series : ");
    scanf("%d",&n);
    printf("%d\n%d\n",a,b);
    for(i=2;i<=n;i=i+2)
    {
        a=a+b;
        b=a+b;

        printf("%d\n%d\n",a,b);
    }
    
    return 0;
}
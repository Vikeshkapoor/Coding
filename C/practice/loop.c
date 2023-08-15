#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the no. till you want to print odd no.:");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        printf("%d ",i);
        sum+=i;
        
    }
    printf("addtion is %d",sum);
return 0;
}
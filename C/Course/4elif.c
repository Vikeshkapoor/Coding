#include<stdio.h>
int main()
{
    int a;
    printf("write any no.\n");
    scanf("%d",&a);
    if(a<50)
    {
        printf("Fail");
    }
    else if(a>49,a<101)
    {
        printf("pass");
    }
    else if (a==199)
    {
        printf("ok");
    }
    
    else 
    {
        printf("enter valid no.");
    }
    
    return 0;
}
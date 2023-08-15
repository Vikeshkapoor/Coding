#include<stdio.h>
int main()
{
    int num;//use appropriate names for declaring variable so that it will be easy to understand
    int i=0;
    printf("enter no. till you want even no.\n");
    scanf("%d",&num);
    while(i<num)
    {
        printf("%d\n",i);
        i=i+2;
    }
    return 0;
}
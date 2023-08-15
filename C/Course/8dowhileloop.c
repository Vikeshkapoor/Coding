#include<stdio.h>
int main()
{
    int i=0;
    int a;
    printf("enter any no.\n");
    scanf("%d",&a);
    do{
        printf("%d\n",i+2);//here i+2 is used,because of this the series will start from 2
        i++;
    }while(i<a);
    return 0;
}
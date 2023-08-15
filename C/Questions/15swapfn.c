#include<stdio.h>
void swap(int ,int);
int main()
{
    int a,b;
    printf("Enter A value : ");
    scanf("%d",&a);
    printf("Enter B value : ");
    scanf("%d",&b);
    printf("\n\t\t\tUnswaped value\t\t\t\n");
    printf("A = %d\nB = %d",a,b);
    printf("\n\t\t\tSwaped value\t\t\t\n");
    swap(a,b);
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("A = %d\nB = %d",a,b);
}
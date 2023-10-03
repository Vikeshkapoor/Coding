#include<stdio.h>
struct emp
{
    char name[20],address[50];
    int year;
}e[3];
int main()
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("\nEnter name : ");
        scanf("%s",e[i].name);
        printf("Year of joining :");
        scanf("%d",&e[i].year);
        printf("Address : ");
        scanf("%s",e[i].address);
    }
    printf("\nName\tYear of joining\tAddress\n");
    for(i=0;i<3;i++)
    {
        printf("%s\t%d\t\t%s\n",e[i].name,e[i].year,e[i].address);
    }
}
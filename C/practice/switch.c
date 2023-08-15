#include<stdio.h>
int main()
{
    int week;
    printf("Enter the week no. that you want to know its name\n");
    scanf("%d",&week);
    switch(week)
    {
        case 1:printf("Sunday");break;
        case 2:printf("Monday");break;
        case 3:printf("tuesday");break;
        case 4:printf("wednesday");break;
        case 5:printf("thursay");break;
        case 6:printf("friday");break;
        case 7:printf("Saturday");break;
        default:printf("Enter no. between 1 to 7 only");
    }
    return 0;
}
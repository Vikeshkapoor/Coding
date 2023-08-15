#include<stdio.h>
int main()
{
    int d,day,plan1,plan2;
    printf("\n\t\t\tWe have two rental plans\t\t\t\n\n");
    printf("1st - Rs.4000 per day with unlimited kilometer\n");
    printf("2nd - Rs.1500 per day with an extra charge of Rs.9 per kilometer\n\n");
    printf("We can suggest you a plan according to your needs, just fill following details-\n\n");
    printf("Enter no. of days you want to rent car : ");
    scanf("%d",&day);
    printf("Enter the total distance(km) you want to cover in car in %d days : ",day);
    scanf("%d",&d);
    plan1=4000*day;
    plan2=(1500+d*9)*day;
    if(plan1<plan2)
    {
        printf("\nAccording to your needs,1st plant will be cheaper as compared to 2nd plan\nSo you can choose 1st plan\n");
    }
    else if(plan1>plan2)
    {
        printf("\nAccording to your needs,2nd plant will be cheaper as compared to 1st plan\nSo you can choose 2nd plan\n");
    }
    else if(plan1=plan2)
    {
        printf("\nAccording to your needs,both plans will cost you same , so you can choose any plan");
    }
    else
    {
        printf("Invalid input");
    }
    return 0;
}
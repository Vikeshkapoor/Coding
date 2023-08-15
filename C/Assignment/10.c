#include<stdio.h>
int main()
{
    int age,weight,chest;
    float height;
    printf("\t\tEnter your details to check whether you are fit for army camp or not\t\t\n\n");
    printf("Enter you age - ");
    scanf("%d",&age);
    printf("\nEnter you height (inches) - ");
    scanf("%f",&height);
    printf("\nEnter your weight (kg) - ");
    scanf("%d",&weight);
    printf("\nEnter your chest (cm) - ");
    scanf("%d",&chest);
    if(age>18 && age<25 && height>=5.2 && height<=5.6 && weight>=45 && weight<=60 && chest>45)
    {
        printf("Congratulatuions you are fit for army camp");
    }
    else if(age<=18 || age>=25 && height>=5.2 && height<=5.6 && weight>=45 && weight<=60 && chest>45)
    {
        printf("You are disqualified beacuse of age");
    }
    else if(age>18 && age<25 || height<5.2 && height>5.6 && weight>=45 && weight<=60 && chest>45)
    {
        printf("You are disqualified beacuse of height");
    }
    else if(age<18 && age>25 && height>=5.2 && height<=5.6 && weight<45 || weight>60 && chest>45)
    {
        printf("You are disqualified beacuse of weight");
    }
    else if(age<18 && age>25 && height>=5.2 && height<=5.6 && weight>=45 && weight<=60 && chest<=45)
    {
        printf("You are not disqualified beacuse of chest");
    }
    else
    {
        printf("You are unfit for army camp");
    }
    return 0;
}
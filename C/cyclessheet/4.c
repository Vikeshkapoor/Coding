//4.	Write a C program that accepts the employee name, ID number, total number of hours worked in a month and the salary per hour. Display the name, ID number and the total salary (limited to two decimal places) of the employee.
#include<stdio.h>
#include<string.h>
int main()
{
    char empname[16],empid[16];
    int hour;
    float sal_hour;
    puts("Enter your name");
    gets(empname);
    puts("Enter your employee ID");
    gets(empid);
    printf("Enter salary per hour\n");
    scanf("%f",&sal_hour);
    printf("Enter total number of hours worked in a month\n");
    scanf("%d",&hour);
    printf("Name=%s\n",empname);
    printf("ID name=%s\n",empid);
    printf("Total salary=%.2f",sal_hour*hour);
    return 0;
}
//5.	There are 50 p coins and Re 1 coins in a box. Given that the box contains 'X' number of 50 p coins and the number of Re 1 coins is   twice as the number of 50 p coins, write a C program to determine the total amount in the box. For example, if the number of 50 p coins is 11 then the number of one rupee coins is 22 and amount of ruppees in the box is 27 and 50 p.
#include<stdio.h>
int main()
{
    float x,x2;
    printf("Enter No. of 50 p coins:");
    scanf("%f",&x);
    x2=x*2;
    printf("Total amount =%.2f rupees",x/2+x2);
    return 0;
}
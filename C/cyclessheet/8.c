#include<stdio.h>
int main()
{
    float tp,amount;
    scanf("%f",&tp);
    if(tp>10000)
    {
        amount=tp-(tp*20/100);
        printf("%.2f",amount);
    }
}
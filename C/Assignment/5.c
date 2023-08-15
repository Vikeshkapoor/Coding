#include<stdio.h>
int main()
{
    int i,n,even=0,odd=0;
    printf("\nEnter the limit for summation of even and odd no. : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
        even+=i;
        }
        else
        {
        odd+=i;
        }
    }
    
    printf("\nSummation of even no. = %d",even);
    printf("\nSummation of odd no. = %d",odd);
    printf("\nSummation of odd with even no. = %d",odd+even);
    return 0;
}
#include<stdio.h>
int main()
{
    int i,n,a[100],count,c_no;
    printf("Enter value of n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d value : ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("Value %d = %d\n",i+1,a[i]); 
    }
    printf("Enter the no. that you want to know no. of occurances :");
    scanf("%d",&c_no);
    for(i=0;i<n;i++)
    {
        if(c_no==a[i])
        count++;
    }
    printf("Count of %d = %d",c_no,count);
}
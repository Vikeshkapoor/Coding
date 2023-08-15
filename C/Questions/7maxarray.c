/*#include<stdio.h>//code to find maximum value
int main()
{
    int max,n,i,check[100];
    printf("Enter total no. of values you want to enter : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter %d value = ",i);
        scanf("%d",&check[i]);

    }
    for(i=1;i<=n;i++)
    {
        if(check[1]<=check[i])
        {
            check[1]=check[i];
            max=check[i];
        }

    }
    printf("max value is %d",max);

    return 0;

}*/
#include<stdio.h>
int main()
{
    int i,a[100],max,n,t;
    printf("How many values you want to enter : \n");
    scanf("%d",&n);
    printf("Enter values\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[0]<=a[i])
        {
            a[0]=a[i];
            max=a[0];
            
        }
    }
    printf("max value is : %d",max); 
}

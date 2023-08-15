/*#include<stdio.h>  //we are using array to take n no. of inputs from user and then finding sum and average
int main()
{
    int i,sum,n,input[100];
    printf("Enter total no. of values you want to enter : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d value : ",i);
        scanf("%d",&input[i]);
        sum+=input[i];
    }
    printf("sum of all values = %d",sum);
    printf("\naverage of values = %d",sum/n);
    return 0;
}*/


//2 dimentional array  (matrix)
#include<stdio.h>
int main()
{
    int n,m,i,j,num[100][100];
    printf("Enter no. of rows you want print : ");
    scanf("%d",&n);
    printf("Enter no. of columns you want print : ");
    scanf("%d",&m);
    for(i=0;i<n;i++)    //code for taking inputs
    {
        for(j=0;j<m;j++)
        {
            printf("Enter %d,%d value : ",i,j);
            scanf("%d",&num[i][j]);
        }
    }
    for(i=0;i<n;i++)   //code for printing values
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t\t\t",num[i][j]);
        }
        printf("\n");
    }
    return 0;


}
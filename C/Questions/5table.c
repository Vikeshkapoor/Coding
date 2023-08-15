#include<stdio.h>
void table()
{
    int i,num;
    printf("Enter no. to get its multiplication table : ");
    scanf("%d",&num);
    printf("Multliplication table of %d \n",num);
    for(i=0;i<=10;i++)
    {
        printf("%d X %d = %d\n",num,i,num*i);
    }
}
int main()
{
    int a;
    again:
    table();
    printf("type 0 to stop or type 1 for new table : ");
    scanf("%d",&a);
    if(a==0)
    {
        goto end;
    }
    else if(a==1)
    {
        goto again;
    }
    else
    {
        goto end;
    }
    end:
    return 0;
}
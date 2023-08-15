#include<stdio.h>
int main()
{
    int math,english,hindi,science,cs,average,sum;
    printf("enter your marks in math : ");
    scanf("%d",&math);
    if(math<50)
    {
        printf("fail\n");
    }
    else if(math>=50 && math<=100)
    {
        printf("pass\n");
    }
    printf("enter your marks in english : ");
    scanf("%d",&english);
    if(english<50)
    {
        printf("fail\n");
    }
    else if(english>=50 && english<=100)
    {
        printf("pass\n");
    }
    printf("enter your marks in hindi : ");
    scanf("%d",&hindi);   
    if(hindi<50)
    {
        printf("fail\n");
    }
    else if(hindi>=50 && hindi<=100)
    {
        printf("pass\n");
    }
    printf("enter your marks in science : ");
    scanf("%d",&science);
    if(science<50)
    {
        printf("fail\n");
    }
    else if(science>=50 && science<=100)
    {
        printf("pass\n");
    }
    printf("enter your marks in cs : ");
    scanf("%d",&cs);
    if(cs<50)
    {
        printf("fail\n");
    }
    else if(cs>=50 && cs<=100)
    {
        printf("pass\n");
    }
    sum=math+english+hindi+science+cs;
    average=sum/5;
    printf("the sum of marks is %d and average of marks is %d",sum,average);
    return 0;
}

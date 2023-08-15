#include<stdio.h>
int main()
{
    int i,n,r;
    float unit,cvalue,num;
    repeat:
    printf("what you want to do , choose the no. from following\n1-kms to miles\n2-inches to foot\n3-cms to inches\n4-pounds to kgs\n5-inches to meters\n=");
    scanf("%d",&n);
    switch(n)
    {
        case 1:printf("Enter no. that you want to convert : ");
        scanf("%f",&num);
        cvalue=num*0.62137119;
        printf("%0.2f km to miles = %0.2fmiles",num,cvalue);
        break;
        case 2:printf("Enter no. that you want to convert : ");
        scanf("%f",&num);
        cvalue=num/12;
        printf("%0.2f inches to foot = %0.2ffoot",num,cvalue);
        break;
        case 3:printf("Enter no. that you want to convert : ");
        scanf("%f",&num);
        cvalue=num*0.393701;
        printf("%0.2f cms to inches = %0.2finches",num,cvalue);
        break;
        case 4:printf("Enter no. that you want to convert : ");
        scanf("%f",&num);
        cvalue=num*0.45359237;
        printf("%0.2f pounds to kgs = %0.2fkg",num,cvalue);
        break;
        case 5:printf("Enter no. that you want to convert : ");
        scanf("%f",&num);
        cvalue=num*0.0254;
        printf("%0.2f inches to meters = %0.2fmeter",num,cvalue);
        break;
        default:printf("Enter valid no. between 1 to 5");
        break;
    }
    printf("\n\n\nWrite 1 if you want to do more calculation or 0 to stop : ");
    scanf("%d",&r);
    if(r==1)
    {
        goto repeat;
    }
    else{
        goto exit;
    }
    exit:
    return 0;
}
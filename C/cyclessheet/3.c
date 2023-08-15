//3.	Write a C program to convert specified days into years, weeks and days. Ignore leap year
#include<stdio.h>
int main()
{
    int days,d,y,w,i,nday,wday;
    printf("ENTER NO. OF DAYS:");
    scanf("%d",&days);
    if(days>=365)
    {
        y=days/365;
        nday=y*365;
        days-=nday;
        w=days/7;
        wday=w*7;
        d=days-wday;
        printf("Years=%d,Weeks=%d,Days=%d",y,w,d);
    }    
    else
    {
        y=0;
        w=days/7;
        wday=w*7;
        d=days-wday;
        printf("Years=%d,Weeks=%d,Days=%d",y,w,d);
    }
    
}
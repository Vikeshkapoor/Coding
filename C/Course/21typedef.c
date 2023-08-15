#include<stdio.h>
typedef struct student  //typedef used in struct (actual name)
{
    int roll;
}s;                     //name that we changed later
int main()
{
    int a=10;
    s s1;
    typedef short int si;
    si b=20;
    s1.roll=200;
    printf("%d\n",s1.roll); 
    printf("%d\n",a);
    printf("%d",b);
    return 0;
}
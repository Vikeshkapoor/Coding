/*(#include<stdio.h>
int main()
{//this code is for even and odd no.
    int a=1,b=2;
    while(a,b<=100)
    {
        printf("%d\t%d\n",a,b);
        a=a+2;
        b=b+2;
    }
    printf("even no. and odd no.");
    return 0;
}


#include <stdio.h>    //check prime no.
int main()
{
    int n, i, count=0;
    printf("that you want to check its prime no. or not\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count+=1;
        }
    }
    (count==2)?printf("prime no\n"):printf("not a prime no.\n");
    return 0;
}


#include<stdio.h>  //sum of n numbers
int main()
{
    int i,n,sum=0,a[100];
    printf("Enter how many no. you want to add : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter %d value : ",i);
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("sum of all values is : %d",sum);
    return 0;
}
#include<stdio.h>
int main()
{
    char a;
    printf("Enter your name  : ");
    scanf("%c",&a);
    printf("%d",a);
    return 0;
}

#include<stdio.h>
struct student
{
    int sub1;
    int sub2;
    int sub3;
};
void main()
{
    struct student s[100];
    int i ,total=0;
    for(i=0;i<10;i++)
    {
        printf("\n Enter marks: ");
        scanf("%d%d%d",&s[i].sub1,&s[i].sub2,&s[i].sub3);
        total=s[i].sub1+s[i].sub2+s[i].sub3;
        printf("total marks of s[%d] student = %d",i,total);
    }
} 

#include<stdio.h>
int fact(int);
int main()
{
    int n;
    printf("Enter the no. of which you want to find factorial : ");
    scanf("%d",&n);
    printf("Factorial is %d",fact(n));
    return 0;
}

int fact(int n)
{
    int i,factorial=1;
    for(i=1;i<=n;i++)
    {        
        factorial*=i;
    }
    return factorial;
} */
#include<stdio.h>
int main()
{
    int i,n,j,x;
    printf("Enter no. of lines for pattern : ");
    scanf("%d",&n);
    for(i=n;i>=0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
            for(x=0;x<i;x++)
            {
                printf("*");
            }
        }
        printf("\n");
        
    }
}
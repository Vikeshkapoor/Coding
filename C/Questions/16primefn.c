/*#include <stdio.h>
int prime(int);
void main()
{
	int num,n=0;
	printf("\nENTER A NUMBER: ");
	scanf("%d",&num);
	n=prime(num);
	if(n==0)
    {
        printf("\n%d IS A PRIME NUMBER\n\n",num);
    }		
	else
    {
        printf("\n%d IS NOT A PRIME NUMBER\n\n",num);
    }		
}
int prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}*/
#include<stdio.h>
void check(int);
int main()
{
	int n,i;
	printf("Enter no. : ");
	scanf("%d",&n);
	check(n);
	return 0;
}
void check(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count==2)
	printf("Its prime no.\n");
	else
	printf("Not a prime no.");
}
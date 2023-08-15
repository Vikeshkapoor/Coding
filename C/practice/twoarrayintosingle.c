#include<stdio.h>
int main()
{
    int a[100],b[100],n,m,i,j,t;
    printf("Enter how many values you will enter for 1st array :");
    scanf("%d",&n);
    printf("Enter how many values you will enter for 2nd array :");
    scanf("%d",&m);
    printf("Enter values of 1st array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);        
    }
    printf("Enter values of 2nd array\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);   
    }
    printf("Combined array\n");
    for(i=n;i<n+m;)
    {
        for(j=0;j<m;j++)
        {
            a[i]=b[j];
            i++;
        }
    }
    for(i=0;i<n+m;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\nSorted array\n");
    for(i=0;i<n+m;i++)
    {
        for(j=i+1;j<n+m;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<n+m;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
/*#include<stdio.h>
int main()
{
	int i,n,m,j,a[10],b[10],count=0,c;
	printf("Array-1");
	printf("\nEnter the number of elements:");
	scanf("%d",&n);
	a[n];
	printf("\nEnter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("\nArray-2");
	printf("\nEnter the number of elements:");
	scanf("%d",&m);
	b[m];
	printf("\nEnter the array elements:");
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	c=m+n;
	int arr[c];
	for(i=0;i<n;i++)
	{
		arr[i]=a[i];
		count++;
	}
	for(i=0;i<m;i++)
	{
		arr[count]=b[i];
		count++;
	}
	printf("\nThe array elemnts after concatenate");
	printf("\n{");
	for(i=0;i<c;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("}");
}*/
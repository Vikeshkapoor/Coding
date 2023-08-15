/*#include<stdio.h>
int main()
{
    int n,i,j,max,temp,sort[100];
    printf("Enter total no. of values you want to enter : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d value = ",i);
        scanf("%d",&sort[i]);
    }
    for(i=0;i<n;i++)
    {
      for(j=i+1;j<=n;j++)
      {
        if(sort[i]>sort[j])
        {
            temp=sort[i];
            sort[i]=sort[j];
            sort[j]=temp;
        }
      }
    }
    for(i=1;i<=n;i++)
    {
        printf("%d\n",sort[i]);
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
  int n,i,j,a[100],min[100],t;
  printf("How many values you want to enter ?\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("Enter %d value : ",i+1);
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<=n;j++)
    {
      if(a[i]>=a[j])
      {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
      }
    }    
  }
  for(i=0;i<n;i++)
    {
      printf("%d\n",a[i]);
    }
}
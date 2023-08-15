//20 chairs are arranged in a single column , 20 persons with different heights are seated in a random order as shown below

#include<stdio.h>
void arrange(float height[100])
{
    int i,j,temp;
    for(i=0;i<20;i++)
    {
        for(j=i+1;j<21;j++)
        if(height[i]>height[j])
        {
            temp=height[i];
            height[i]=height[j];
            height[j]=temp;
        }
    }
}

void main()
{
    float height[100];
    int i;
    for(i=0;i<21;i++)
    {
        printf("\nEnter height of %d person(in cm) : ",i);
        scanf("%f",&height[i]);
    }
    arrange(height);
    printf("\t\tHeight of all persons in ascending order\t\t\n");
    for(i=0;i<21;i++)
    {
        printf("%f\n",height[i]);
    }
    
}
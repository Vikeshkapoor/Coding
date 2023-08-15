#include<stdio.h>

int sum(int a,int b)   //funtion 1
{   
printf("\n%d\n",a+b);
}


void printstar(int n)  //funtion 2
{
    for (int i = 0; i < n; i++)
    {
        printf("%c",'*');
    }
    
}


int takenumber()        //function 3
{
    int i;
    printf("\nenter any number\n");
    scanf("%d",&i);
}




int main()
{
    sum(15,50);     //after making functions i can use them anytime 
    printstar(16);
    sum(500,600);
    printstar(20);
    takenumber();

    
    return 0;
}
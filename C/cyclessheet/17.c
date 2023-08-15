//17.	Write a C program to print the pattern: *
//                                            *   *
//                                          *   *   *
#include<stdio.h>
int main()
{
    int line,i,j,space;
    printf("Enter no. of lines : ");
    scanf("%d",&line);
    space=line-1;
    for(i=0;i<line;i++)
    {
        for(j=0;j<space;j++)
        {
            printf(" ");
        }
        space--;
        for(j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

}
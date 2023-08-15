//18.	Write a C program to print the Floyd‟s triangle:1
//                                                      01
//                                                      101
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter no. of rows you want : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(i%2 == j%2)
            {
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
        printf("%d",100/10*10);
    }
    return 0;
}  
/*#include <stdio.h>

int main() {
    int n = 4;
    int i, j;
    int num = 1;

    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j+i-1);
        }

        // Print reverse numbers
        for (j = 1; j < i; j++) {
            printf("%d", 2*i-j-1);
        }

        printf("\n");
    }

    return 0;
}*/


#include <stdio.h>
int main()
{
    int n, i, count=0;
    printf("\nEnter no. to check whether its a prime no. or not = ");
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
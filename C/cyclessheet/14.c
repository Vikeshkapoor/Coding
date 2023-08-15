//14.	Write a C program to accept an integer as input and find the frequency of each digit. For example, suppose the user has entered the number 1323. The frequency of digit 1 is 1, 3 is 2 and that of 2 is 1.
#include<stdio.h>
int main()
{
    int i,n,a[20]={0},j,freq;
    printf("Enter digit : ");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        j=i%10;
        a[j]++;
    }
    for(i=0;i<10;i++)
    {
        freq=a[i];
        if(freq>0)
        {
            printf("Frequency of digit %d: %d\n", i, freq);
        }       
    }
    return 0;
}
 
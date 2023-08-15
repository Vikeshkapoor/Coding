//Write a C program to find the number of vowels, consonants and vowels in a Character Array. 
#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,vcount=0,ccount=0,wcount=0;
    char a[100];
    printf("Enter any sentence to check how many vowels are used in that sentence : ");
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='a'|| a[i]=='A' || a[i]=='e' || a[i]=='E' || a[i]=='i' || a[i]=='I' || a[i]=='o' || a[i]=='O' || a[i]=='u' || a[i]=='U')
        {
            vcount++;
        }
        else if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z')
        {
            ccount++;
        }
        else if(a[i]=" ")
        {
            wcount++;
        }
    }
    printf("Total no. of vowels used = %d\n",vcount);
    printf("Total no. of vowels used = %d\n",ccount);
    printf("Total no. of vowels used = %d\n",wcount+1);
    return 0;
    
}

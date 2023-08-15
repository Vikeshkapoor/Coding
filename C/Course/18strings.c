#include<stdio.h>
#include<string.h>
/*int main()           //1 dimentional string
{
    char a[100];   
    int i,n;
    printf("Enter name : ");
    gets(a);                //used for taking input in string
    printf("%s\n",a);         //used for printing
    printf(a);              //used for printing
    puts(a);                //used for printing
    
    return 0;
}*/
int main()             // 2 dimentional array
{
    char name[5][15];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter name %d : ",i+1);
        gets(name[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("Name %d = %s\n",i+1,name[i]);
    }
}



#include<stdio.h>
#include<string.h>      //in this , string library is used so that we can use its functions
int main()
{
    char name[100];
    char clg[100];
    printf("Enter your name : ");
    gets(name);
    printf("Enter your college name :");
    gets(clg);
    puts(name);        //here i used puts but i can also used printf
    puts(clg);

    //now i will use functions of string.h
     
    puts(strcat(name,clg));
    printf("%d\n",strlen(name)); 
    puts(strrev(name));
    strcpy(name,clg);
    puts(name);
    puts(clg);

    return 0;
}
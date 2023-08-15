//Write a C program to get the marks of N students in M subjects and display it in table form.
#include<stdio.h>
struct student
{
    int sub[100];
};
int main()
{
    struct student s[100];
    int n,m,i,j;
    printf("\nEnter total no. of students : ");
    scanf("%d",&n);
    printf("Enter total no. of subjects : ");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        printf("\n\t\t\tEnter marks of %d student\t\t\t\n",i+1);
        for(j=0;j<m;j++)
        {
            printf("Enter marks in %d subject : ",j+1);
            scanf("%d",&s[i].sub[j]);
        }
    }
    printf("Name\t\t");
    for(i=0;i<m;i++)
    {
        printf("\tSubject %d\t\t",i+1);
    }
    for(i=0;i<n;i++)
    {
        printf("\nStudent %d\t\t",i+1);
        for(j=0;j<m;j++)
        {
            printf("%d\t\t\t\t",s[i].sub[j]);
        }
    }
    

    return 0;    
}

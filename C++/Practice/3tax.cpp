#include<iostream>
#include<string>
using namespace std;
int main()
{
    int roll[100],i;
    string name[100];
    for(i=0;i<4;i++)
    {
        scanf("%d",&roll[i]);
        scanf("%s",&name[i]);
    }
    for(i=0;i<4;i++)
    {
        printf("%s",name[i]);
    }

}
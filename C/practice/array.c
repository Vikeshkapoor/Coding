#include<stdio.h>
int main()
{
    int mark[3]={23,43,23,12};
    int i=0,max;
    while(i<3)
    {
        max=max[i];
        if(max[i]<max[i+1])
        {
            max=max[i+1];
            i++;
        }
        else{
            i++;
        }
    }
    printf("%d",max);
    return 0;
}    
#include<iostream>
using namespace std;
int main()
{
    int n[3],min,max,i;
    cout<<"Enter value of n1 :";
    cin>>n[0];
    cout<<"Enter value of n2 :";
    cin>>n[1];
    cout<<"Enter value of n3 :";
    cin>>n[2];
    max=n[0];
    for(i=0;i<3;i++)
    {
        if(n[i]>max)
        {
            max=n[i];
        }
    }
    min=n[0];
    for(i=0;i<3;i++)
    {
        if(n[i]<min)
        {
            min=n[i];
        }
    }
    cout<<"Max = "<<max<<endl<<"Min = "<<min<<endl;

}
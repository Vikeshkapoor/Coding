#include<iostream>
using namespace std;
int main()
{
    int n,i,r,rev=0;
    cout<<"Enter value of n :";
    cin>>n;
    for(i=n;i>0;i=i/10)
    {
        r=i%10;
        rev=rev*10+r;
    }
    cout<<"Reversed no. : "<<rev<<endl;
}
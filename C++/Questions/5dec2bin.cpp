#include<iostream>
using namespace std;
int main()
{
    int n,i,j=0,a[100];
    cout<<"Enter decimal number : ";
    cin>>n;
    for(i=n;i>0;i=i/2)
    {
        a[j]=i%2;
        j++;
    }
    cout<<"Conversion of decimal to binary"<<endl;
    for(i=j-1;i>=0;i--)
    {
        cout<<a[i];
    }
}
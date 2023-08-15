#include<iostream>
using namespace std;
int main()
{
    int i,j,n,m=0,x=0;
    cout<<"Enter value of n : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        m++;
        for(j=1;j<=m;j++)
        {
            cout<<j;
        }
        for(j=x;j>=1;j--)
        {
            cout<<j;
        }
        x++;
        cout<<endl;
    }
    for(i=0;i<n;i++)
    {
        m--;
        for(j=m;j>=1;j--)
        {
            cout<<j;
        }
        for(j=1;j<=m;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }

}
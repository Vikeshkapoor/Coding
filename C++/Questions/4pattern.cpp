#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter value of n :";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        if(i!=1){
            for(j=i;j>=1;j--)
            {
                cout<<j;
            }
        }
        cout<<endl;
    }
    for(i=n-1;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        if(i!=1){
            for(j=i;j>=1;j--)
            {
                cout<<j;
            }
        }
        cout<<endl;
    }
}
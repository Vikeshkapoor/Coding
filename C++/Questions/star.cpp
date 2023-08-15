#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"Enter no. :";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=n;j>0;j--)
        {
            cout<<"\t";
            for(k=0;k<=i;k++)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

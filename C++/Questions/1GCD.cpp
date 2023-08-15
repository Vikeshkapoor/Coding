#include<iostream>
using namespace std;
int main()
{
    int n1,n2,i;
    cout<<"Enter value of n1 :";
    cin>>n1;
    cout<<"Enter value of n2 :";
    cin>>n2;
    cout<<"Divisors of "<<n1<<endl;
    for(i=1;i<=n1;i++)
    {
        if(n1%i==0)
        {
            cout<<i<<endl;
        }
    }
    cout<<"Divisors of "<<n2<<endl;
    for(i=1;i<=n2;i++)
    {
        if(n2%i==0)
        {
            cout<<i<<endl;
        }
    }
    if(n1>n2)
    {
        n1=n1+n2;
        n2=n1-n2;
        n1=n1-n2;
    }
    for(i=1;i<=n2;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            if(i>1)
            {
                cout<<"GCD = "<<i;
                break;
            }
        }
    }

}
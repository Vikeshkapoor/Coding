#include<iostream>
#include<string.h>
using namespace std;
int sum(int a,int b,int c)     //here we are using same function to do different task and this is know as polymorphism or function overloading
{
    cout<<"Program using 3 arguments"<<endl;
    return a+b+c;
}
int sum(int a,int b)
{
    cout<<"Program using 2 arguments"<<endl;
    return a+b;
}
int main()
{
    int a,b,c;
    cout<<"Enter value of a,b,c"<<endl;
    cin>>a>>b>>c;
    cout<<"Sum of a,b,c ="<<sum(a,b,c)<<endl;
    cout<<"Sum of a,b ="<<sum(a,b)<<endl;
}

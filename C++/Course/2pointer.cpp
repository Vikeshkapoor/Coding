#include<iostream>
using namespace std;
int main()
{
    int a=6;
    int* b=&a;
    
    //value
    cout<<a<<endl;
    cout<<*b<<endl;

    //address
    cout<<&a<<endl;
    cout<<b;
}
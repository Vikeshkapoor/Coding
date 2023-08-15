#include<iostream>
using namespace std;
void swap(int* ,int*);
int main()
{
    int a,b;
    cout<<"Enter value of a:";
    cin>>a;
    cout<<"Enter value of b:";
    cin>>b;
    cout<<a<<endl;
    cout<<b<<endl;
    swap(&a,&b);
    cout<<"swapped values"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
}
void swap(int* a,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

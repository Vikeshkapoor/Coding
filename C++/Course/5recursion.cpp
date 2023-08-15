#include<iostream>
using namespace std;
int sum(int n)         //program to find sum using recursion
{
    if(n<=1)
    {
        return 1;
    }
    else{
        return n+sum(n-1);
    }    
}
int main()
{
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    cout<<"Sum ="<<sum(n);
}
/*int fact(int n)            //program to find factorial using recursion
{
    if(n<=1)
    {
        return 1;
    }
    return n * fact(n-1);
}
int main()
{
    int n;
    cout<<"Enter no. to find its factorial : ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<fact(n);
}
int fibo(int n)              //program to find fibonacci using recursion
{
    int i=1;
    if(n<2)
    {
        return 1;
    }
    return fibo(n-2)+fibo(n-1);
}
int main()
{
    int n;
    cout<<"Enter no. to know the no. of fibonacci series at that position : ";
    cin>>n;
    cout<<fibo(n)<<endl;
}*/
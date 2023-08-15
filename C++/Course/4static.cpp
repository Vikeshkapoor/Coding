#include<iostream>
using namespace std;
inline int product(int a,int b)        //by using inline it will save time to perform same task again and again
{
    static int c=0;          //by using static c will save its new value
    const int d=0;           //by using const d value cannot be changed in the program later
    c++;
    return a*b+c+d;
}
int main()
{
    int a,b;
    cout<<"Enter value of a and b:";
    cin>>a>>b;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
}
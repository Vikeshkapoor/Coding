#include<iostream>
using namespace std;
class student
{
    private:
    int a,b,c;
    
    public:
    int d,e,f;

    void setdata(int a1,int b1, int c1);   //we can also declare functions outside the class (by using scope resolution operator)
    void printdata()
    {
        cout<<"A ="<<a<<endl;
        cout<<"B ="<<b<<endl;
        cout<<"C ="<<c<<endl;
        cout<<"D ="<<d<<endl;
        cout<<"E ="<<e<<endl;
        cout<<"F ="<<f<<endl;
    }
};
void student :: setdata(int a1,int b1,int c1)  //:: scope resolution operator is used to define function that we have declared in class
{
    a=a1;
    b=b1;
    c=c1;
}
int main()
{
    student s1;
    int d,e,f;
    s1.d=4;      //we can directly give values to public
    s1.e=5;
    s1.f=6;
    s1.setdata(1,2,3);   //but to initilize value for private we have to use function
    s1.printdata();    
}
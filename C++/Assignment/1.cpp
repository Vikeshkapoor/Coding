#include<iostream>
#include<string.h> 
using namespace std;
class book
{
public:
string title; int copies;
double price; book(string t,int
c,double p)
{
copies=c; title=t; price=p;
}
void checkavailability(int num)
{
if(copies>=num)
{
cout<<"Book is available"<<endl;
cout<<"Total price = "<<num*price<<endl;
}
else
cout<<"Book is not available"<<endl;
}
void display_details()
{
cout<<"title"<<title<<endl;
cout<<"price"<<price<<endl;
}
};
int main()
{
string bn; int n;
book b1("C",20,499.99); book
b2("Statistics",15,599.99); 
book b3("C++",30,699.99);
book b4("Python",25,699.99); 
book b5("Algorithm",35,799.99); 
cout<<"Enter the name of the book that you want"<<endl; 
cin>>bn;
cout<<"Enter the how many copies you want"<<endl; cin>>n; 
if(b1.title==bn)
b1.checkavailability(n); else if(b2.title==bn)
b2.checkavailability(n); else if(b3.title==bn)
b3.checkavailability(n); else if(b4.title==bn)
b4.checkavailability(n); else if(b5.title==bn)
b5.checkavailability(n); else cout<<"Book is not in list"; return
0; }
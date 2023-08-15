#include<iostream>
using namespace std;
class student
{
    int roll;
    public:
    int marks;
    void data()
    {
        cout<<"Enter roll no.:"<<endl;
        cin>>roll;
        cout<<"Enter marks no.:"<<endl;
        cin>>marks;
        cout<<"Roll no = "<<roll;
        cout<<"Marks ="<<marks;
    }

};

int main()
{
    student s;
    s.data();

}

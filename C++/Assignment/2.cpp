#include<iostream>
#include<string> 
using namespace std;
class basic
{
public: 
string name;
string gender;
int id;
basic()
{
cout<<"Enter your name"<<endl;
cin>>name;
cout<<"Enter your gender"<<endl;
cin>>gender;
cout<<"Enter your id"<<endl;
cin>>id;
}
};
class dept
{
public:
double fees;
int semester;
float cgpa;

dept()
{
cout<<"Enter the fees"<<endl;
cin>>fees;
cout<<"Enter the semester"<<endl;
cin>>semester;
cout<<"Enter your gpa"<<endl;
cin>>cgpa;
}
};
class student :public basic,public dept
{ public:

void set()
{

}
void display()
{
cout<<"name "<<name;
cout<<"\ngender "<<gender;
cout<<"\nid "<<id;
cout<<"\nsemester"<<semester;
cout<<"\nfees "<<fees;
cout<<"\ncgpa "<<cgpa;
} 
};
int main()
{
    student s1; s1.display();
    return 0;
}
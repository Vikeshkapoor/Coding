#include<iostream>
using namespace std;
class binary
{
    private:
    string s;
    void chk(void);
    public:
    void read(void);
    void conversion(void);
    void print(void);
};
void binary::read(void)
{
    cout<<"Give binary no. to find its 1's compliment :";
    cin>>s;
}

void binary::chk(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Given no. is not a binary number";
            exit(0);
        }
    }
}

void binary::conversion(void)
{
    chk();         //used function inside function as we have declared the chk function as private so we cannot use this outside the class
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}

void binary::print(void)
{
    cout<<s;
}
int main()
{
    binary b;
    b.read();
    b.conversion();
    b.print();
    

}
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
void candidate_details();
void result();
int i = 0, n, x;
int candidate1 = 0, candidate2 = 0, candidate3 = 0, nota = 0;
class voting
{
private:
    int n, wrong = 0;
    string username = "vikesh";
    string password = "123456789";

public:
    string un,pwd;
    void authentication_process();
};
// Voter class
class voter : public voting
{
    char name[20];
    int age, vote;

public:
    void getdata();
    void voting();
};

// list to vote or see results
int main()
{
    voter v[100];
    v[1].authentication_process();
    int i = 0;
    candidate_details();
    cout << endl
         << endl
         << "\t\t(---VOTING---)" << endl;
    cout << endl
         << "Enter the no. to perform task";
    do
    {
        cout << endl
             << "1 - Voting" << endl
             << "2 - See results" << endl
             <<"3 - Candidate details" <<endl
             << "4 - Logout" << endl
             <<"5 - Exit"<<endl;
        cout << "->";
        cin >> x;
        switch (x)
        {
        case 1:
        {
            v[i].getdata();
            v[i].voting();
            i++;
            break;
        }
        case 2:
        {
            result();
            break;
        }
        case 3:
        {
            candidate_details();
            break;
        }
        case 4:
        {
            cout << endl
                 << "Logged out" << endl;
            v[1].authentication_process();
            break;
        }
        case 5:
        {
            cout<<endl<<"Exiting system";
            exit(0);
        }
        default:
        {
            cout << "Choose valid no." << endl;
        }
        }
    } while (x != 4 || x!=5);
}

// authentication process
void voting::authentication_process()
{
    cout << endl
         << "!!!!!!!!!!!!!!!!!!!!!!!!!!!-----Voting System-----!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
    cout << endl
         << "Press 1 to login : ";
    cin >> n;
authentication:
    if (n == 1)
    {
        cout << endl
             << "Authentication process" << endl;
        cout << endl
             << "Enter admin user name : ";
        cin >> un;
        cout << "Enter password : ";
        cin >> pwd;
        if (un == username && pwd == password)
        {
            cout << "Logged in , Access granted" << endl;
        }
        else
        {
            cout << "Username or password is incorrect  ,Access denied";
            wrong++;
            cout <<endl<< 3 - wrong << " chances left" << endl;
            if (wrong > 2)
            {
                cout <<"You cannot access this system as you have entered wrong details multiple times" <<endl<< endl;
                exit(0);
            }
            else
            {
                goto authentication;
            }
        }
    }
    else
    {
        cout << "Enter valid no. ";
    }
}

// Candidate details
void candidate_details()
{
    cout << "------------------------------------------------------------------------------------------" << endl;
    cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
    cout << "------------------------------------------------------------------------------------------" << endl;
    cout << "Candidate id no. - 1"
         << endl
         << "\t\tName - Vikesh"
         << endl
         << "\t\tParty - BJP" << endl
         << endl
         << "Candidate id no. - 2"
         << endl
         << "\t\tName - Arun"
         << endl
         << "\t\tParty - Congress" << endl
         << endl
         << "Candidate id no. - 3"
         << endl
         << "\t\tName - Darun"
         << endl
         << "\t\tParty - DMK" << endl
         << endl
         << "Id no. - 4"
         << endl
         << "\t\tNOTA" << endl;
    cout << "------------------------------------------------------------------------------------------" << endl;
    cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
    cout << "------------------------------------------------------------------------------------------" << endl;
}

// taking voter details
void voter::getdata()
{
    cout << "Enter your name = ";
    cin >> name;
    cout << "Enter your age = ";
    cin >> age;
}
// voting process
void voter::voting()
{
    if (age >= 18)
    {
        cout << "Enter candidate id number(voting) = ";
        cin >> vote;
        cout<<"Vote added successful"<<endl;
        cout << "------------------------------------------------------------------------------------------";
        if (vote == 1)
        {
            candidate1++;
        }
        else if (vote == 2)
        {
            candidate2++;
        }
        else if (vote == 3)
        {
            candidate3++;
        }
        else
        {
            nota++;
        }
    }
    else
    {
        cout << "You are not eligible for voting (Because age should be >=18" << endl;
        cout << "------------------------------------------------------------------------------------------";
    }
}
// results
void result()
{
// printing results
results:
    cout << "------------------------------------------------------------------------------------------" << endl;
    cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
    cout << "------------------------------------------------------------------------------------------" << endl;
    cout << endl
         << "\t\t\tVoting results" << endl;
    cout << "Candidate 1 = " << candidate1 << endl
         << "Candidate 2 = " << candidate2 << endl
         << "Candidate 3 = " << candidate3 << endl
         << "NOTA = " << nota << endl;

    // printing winner details
    cout << endl
         << "\t\t\tWinner Details" << endl;
    if (candidate1 > candidate2 && candidate1 > candidate3)
    {
        cout << "Winner  = Candidate 1 " << endl
             << "\tName = vikesh" << endl
             << "\tNo. of votes = " << candidate1 << endl;
    }
    else if (candidate2 > candidate3)
    {
        cout << "Winner  = Candidate 2 " << endl
             << "\tName = Arun" << endl
             << "\tNo. of votes = " << candidate2 << endl;
    }
    else if (candidate1 == candidate2 || candidate1 == candidate3 || candidate2 == candidate3)
    {
        cout << "Draw" << endl;
    }
    else
    {
        cout << "Winner  = Candidate 3 " << endl
             << "\tName = Darun" << endl
             << "\tNo. of votes = " << candidate3 << endl;
    }
    cout << "------------------------------------------------------------------------------------------" << endl;
    cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
    cout << "------------------------------------------------------------------------------------------" << endl;
}
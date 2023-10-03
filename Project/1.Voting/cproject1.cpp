#include <iostream>
#include <string.h>
using namespace std;
void candidate_details();
void voting();
void result();
int i = 0, n, x;
int candidate1 = 0, candidate2 = 0, candidate3 = 0, nota = 0;

// Voter details
struct voter
{
    char name[20];
    int age, vote;
} v[100];

// voting process
int main()
{
    candidate_details();
    cout << endl
         << endl
         << "\t\tVOTING" << endl;
    cout << "Enter the no. to perform task" << endl;
    do
    {
        cout << endl
             << "1 - Voting" << endl
             << "2 - See results" << endl
             << "3 - Exit" << endl;
        cout << "->";
        cin >> x;
        switch (x)
        {
        case 1:
        {
            voting();
            break;
        }
        case 2:
        {
            result();
            break;
        }
        case 3:
        {
            break;
        }
        default:
        {
            cout << "Choose valid no." << endl;
        }
        }
    } while (x != 3);
}

// Candidate details
void candidate_details()
{
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
}

// voting process
void voting()
{
    i++;
    cout << endl
         << i << "- Enter your name = ";
    cin >> v[i].name;
    cout << "Enter your age = ";
    cin >> v[i].age;
    if (v[i].age >= 18)
    {
        cout << "Enter candidate id number(voting) = ";
        cin >> v[i].vote;
        if (v[i].vote == 1)
        {
            candidate1++;
        }
        else if (v[i].vote == 2)
        {
            candidate2++;
        }
        else if (v[i].vote == 3)
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
    }
}
// results
void result()
{

// printing results
results:
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
}
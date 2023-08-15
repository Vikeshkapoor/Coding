#include <iostream>
#include <string.h>
using namespace std;

//Voter details
struct voter
{
    char name[20];
    int age, vote;
} v[100];

//Candidate details
void candidate_details()
{
    cout<<"Candidate id no. - 1"
    <<endl<<"\t\tName - Vikesh"
    <<endl<<"\t\tParty - BJP"<<endl
    <<endl<<"Candidate id no. - 2"
    <<endl<<"\t\tName - Arun"
    <<endl<<"\t\tParty - Congress"<<endl
    <<endl<<"Candidate id no. - 3"
    <<endl<<"\t\tName - Darun"
    <<endl<<"\t\tParty - DMK"<<endl
    <<endl<<"Id no. - 4"
    <<endl<<"\t\tNOTA"<<endl;
}

//voting process
int main()
{
    int i, n;
    int candidate1 = 0, candidate2 = 0, candidate3 = 0, nota = 0;
    candidate_details();
    cout<<endl <<endl<<"\t\tVOTING"<<endl;
    for (i = 0; i < 1000; i++)
    {
        cout<<endl<<"Press 1 to do voting or press 0 to see the results"<<endl;
        cin>>n;
        if (n == 0)
        {
            goto results;
        }
        else
        {
            cout<<endl<<i+1<<"- Enter your name = ";
            cin>>v[i].name;
            cout<<"Enter your age = ";
            cin>>v[i].age;
            if(v[i].age>=18)
            {
                cout<<"Enter your candidate id number = ";
                cin>>v[i].vote;
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
            else{
                cout<<"You are not eligible for voting (Because age should be >=18";
            }
        }
    }

//printing results
results:
    cout<<endl<<"\t\t\tVoting results"<<endl;
    cout<<"Candidate 1 = "<<candidate1<<endl<<"Candidate 2 = "<<candidate2<<endl<<"Candidate 3 = "<<candidate3<<endl<<"NOTA = "<<nota<<endl;

//printing winner details
    cout<<endl<<"\t\t\tWinner Details"<<endl;
    if (candidate1 > candidate2 && candidate1 > candidate3)
    {
        cout<<"Winner  = Candidate 1 "<<endl<<"\tName = vikesh"<<endl<<"\tNo. of votes = "<<candidate1<<endl;
    }
    else if (candidate2 > candidate3)
    {
        cout<<"Winner  = Candidate 2 "<<endl<<"\tName = Arun"<<endl<<"\tNo. of votes = "<<candidate2<<endl;
    }
    else if (candidate1 == candidate2 || candidate1 == candidate3 || candidate2 == candidate3)
    {
        cout<<"Draw"<<endl;
    }
    else
    {
        cout<<"Winner  = Candidate 3 "<<endl<<"\tName = Darun"<<endl<<"\tNo. of votes = "<<candidate3<<endl;
    }
}
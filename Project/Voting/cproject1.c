#include <stdio.h>
#include <string.h>

//Voter details
struct voter
{
    char name[20];
    int age, vote;
} v[100];

//Candidate details
void candidate_details()
{
    printf("Enter name = 0 ,to see the results\nCandidate id no. - 1\n\t\tName - Vikesh\n\t\tParty - BJP\nCandidate id no. - 2\n\t\tName - Arun\n\t\tParty - Congress\nCandidate id no. - 3\n\t\tName - Darun\n\t\tParty - DMK\nId no. - 4\n\t\tNOTA\n");
}

//voting process
int main()
{
    int i, n;
    int candidate1 = 0, candidate2 = 0, candidate3 = 0, nota = 0;
    candidate_details();
    printf("\n\n\t\tVOTING\n\n");
    for (i = 0; i < 1000; i++)
    {
        printf("\nPress 1 to do voting or press 0 to see the results\n");
        scanf("%d", &n);
        if (n == 0)
        {
            goto results;
        }
        else
        {
            printf("\n%d - Enter your name = ", i + 1);
            scanf("%s", v[i].name);
            printf("     Enter your age = ");
            scanf("%d", &v[i].age);
            printf("     Enter your candidate id number = ");
            scanf("%d", &v[i].vote);
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
    }

//printing results
results:
    printf("\n\t\t\tVoting results\n");
    printf("Candidate 1 = %d\nCandidate 2 = %d\nCandidate 3 = %d\nNOTA = %d", candidate1, candidate2, candidate3, nota);

//printing winner details
    printf("\n\n\t\t\tWinner Details\n\n");
    if (candidate1 > candidate2 && candidate1 > candidate3)
    {
        printf("Winner  = Candidate 1 \n\tName = vikesh\n\tNo. of votes = %d\n", candidate1);
    }
    else if (candidate2 > candidate3)
    {
        printf("Winner  = Candidate 2 \n\tName = Arun\n\tNo. of votes = %d\n", candidate2);
    }
    else if (candidate1 == candidate2 || candidate1 == candidate3 || candidate2 == candidate3)
    {
        printf("Draw\n");
    }
    else
    {
        printf("Winner  = Candidate 3 \n\tName = Darun\n\tNo. of votes = %d", candidate3);
    }
}
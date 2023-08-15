/*  * 
   * *
  * * *
 * * * *
* * * * * */
#include<iostream>
using namespace std;
int main()
{
    int i,j,n,space;
    cout<<"Enter no. of lines : ";
    cin>>n;
    space=n-1;
    for(i=0;i<n;i++)
    {
         for(j=0;j<space;j++)
         {
            cout<<" ";

         }
         for(j=0;j<=i;j++)
         {
            cout<<"* ";
         }
         cout<<endl;
         space--;
    }
}
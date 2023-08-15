#include<stdio.h>
#include<string.h>
struct student                     //instead of struct we can use union as well 
//union student                    //this will only allocate storage that we want
                                   //by using union we can write efficient code and can do good memory management
{
    int id;
    int marks;
    char place;
};
int main()
{
    struct student vikesh,lucky,shivu;
    //union student vikesh,lucky,shivu;
    vikesh.id=1;
    vikesh.marks=100;
    vikesh.place='chowari';
    //strcpy(vikesh.surname ,"Kapoor");


    lucky.id=2;
    lucky.marks=99;
    lucky.place='chowari';
    shivu.id=3;
    shivu.marks=99;
    shivu.place='tundi';

    printf("Information of Vikesh : \nId = %d\nMarks = %d\nPlace = %d\n",vikesh.id,vikesh.marks,vikesh.place);
    printf("Information of Lucky : \nId = %d\nMarks = %d\nPlace = %d\n",lucky.id,lucky.marks,lucky.place);
    printf("Information of Shivu : \nId = %d\nMarks = %d\nPlace = %d\n",shivu.id,shivu.marks,shivu.place);  


    return 0;
}
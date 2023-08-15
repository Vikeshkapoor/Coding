#include<stdio.h>
int main()
{
    int pendrive=500,sony=1000,tab=3500,hdd=4000;
    int npen,nsony,ntab,nhdd,price,discount;
    printf("\nNo. of 4GB pen drives : ");
    scanf("%d",&npen);
    printf("\nNo. of Sony headset : ");
    scanf("%d",&nsony);
    printf("\nNo. of Samsung tablet : ");
    scanf("%d",&ntab);
    printf("\nNo. of 1TB seagate hard drive : ");
    scanf("%d",&nhdd);
    price=(pendrive*npen)+(sony*nsony)+(tab*ntab)+(hdd*nhdd);
    printf("\n\nActual price = %d",price);
    printf("\nTotal discount = %d",discount=price*12/100);
    printf("\n\nYour total bill amount after discount is  = %d",price-discount);

    return 0;

}
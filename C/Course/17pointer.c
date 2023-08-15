#include<stdio.h>
int main()
{
    int a=10;
    int* vk=&a;
    printf("%d\n",vk);  //here %d is for integer address
    printf("%p\n",vk);  //here %p is for (capital)hexadecimal address
    printf("%x\n",vk);  //here %x is for (small)hexadecimal address
    printf("%d\n",vk++); //here ++ is used to increse increse address no.
    return 0;
}
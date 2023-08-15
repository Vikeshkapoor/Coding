#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int a,b;
    a=95;
    b=34;
    printf("a+b=%d\n",a+b);
    printf("a/b=%d\n",a/b);//and /is used for getting quotient
    printf("a%%b=%d\n",a%b);//%is used for getting remainder
    printf("a*b=%d\n",a*b);
    printf("a-b=%d\n",a-b);
    printf("a is equal to b=%d\n",a==b);
    printf("a is not equal to b=%d\n",a!=b);
    printf("and of a and b=%d\n",a&b);
    printf("or of a and b=%d\n",a|b);
    printf("xor of a and b=%d\n",a^b);
    printf("not of b=%d\n",!b);

    
    return 0;
}

#include <stdio.h>
int main()
{
    int roll,sum, pf, ct, dcf, sa, eng, es, se;
    float avg;
    printf("Enter your roll no.(last 3 digits of reg no.) - ");
    scanf("%d",&roll);
    printf("\nEnter your marks in programming fundamentals : ");
    scanf("%d", &pf);
    printf("\nEnter your marks in computational thiking : ");
    scanf("%d", &ct);
    printf("\nEnter your marks in digital computer fundamentals : ");
    scanf("%d", &dcf);
    printf("\nEnter your marks in statistical applications : ");
    scanf("%d", &sa);
    printf("\nEnter your marks in english : ");
    scanf("%d", &eng);
    printf("\nEnter your marks in environmental studies : ");
    scanf("%d", &es);
    printf("\nEnter your marks in software engineering : ");
    scanf("%d", &se);
    printf("\t\t\tReport\t\t\t\n\n");
    printf("Roll no. : %d\n",roll);
    printf("Format - \nSubject name : Marks \nPass or Re Appear\n\n\n");
    printf("1.Programming fundamentals : %d\n", pf);
    pf >= 50 ? printf("pass\n") : printf("Re Appear\n");
    printf("\n2.Computational thinking : %d\n", ct);
    ct >= 50 ? printf("pass\n") : printf("Re Appear\n");
    printf("\n3.digital computer fundamentals : %d\n", dcf);
    dcf >= 50 ? printf("pass\n") : printf("Re Appear\n");
    printf("\n4.statistical applications : %d\n", sa);
    sa >= 50 ? printf("pass\n") : printf("Re Appear\n");
    printf("\n5.english : %d\n", eng);
    eng >= 50 ? printf("pass\n") : printf("Re Appear\n");
    printf("\n6.environmental studies : %d\n", es);
    es >= 50 ? printf("pass\n") : printf("Re Appear\n");
    printf("\n7.software engineering : %d\n", se);
    se >= 50 ? printf("pass\n") : printf("Re Appear\n\n");
    sum = pf + ct + dcf + sa + eng + es + se;
    printf("\nTotal marks : %d", sum);
    avg = sum / 7;
    printf("\nAverage of your marks : %f", avg);
    return 0;
}
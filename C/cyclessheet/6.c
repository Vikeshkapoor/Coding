//6.Given that three students Adam, Alice and Bob scored an average of 'a' marks in a test and 'x' as mark of Adam and 'y' as mark of Alice, develop a flowchart and write a Python code to determine the mark scored by Bob. For example, if average marks is 50, marks scored by Adam and Alice is 60 and 55 then mark scored by Bob is 35.
#include<stdio.h>
int main()
{
    int avg,adam_mark,alice_mark,bob_mark;
    printf("Enter average marks:");
    scanf("%d",&avg);
    printf("Enter mark of Adam:");
    scanf("%d",&adam_mark);
    printf("Enter mark of Alice:");
    scanf("%d",&alice_mark);
    bob_mark=avg*3-(adam_mark+alice_mark);
    printf("Bob marks=%d",bob_mark);
    return 0;
}
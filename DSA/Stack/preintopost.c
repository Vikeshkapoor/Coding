#include <stdio.h>
#include <ctype.h>

#define SIZE 50

char s[SIZE];
int top = -1;

void push(char chr)
{
    top++;
    s[top] = chr;
}

char pop()
{
    char x;
    x = s[top];
    top--;
    return (x);
}

int pr(char chr)
{
    switch (chr)
    {
    case '#':
        return 0;
    case '(':
        return 1;
    case '+':
    case '-':
        return 2;
    case '*':
    case '/':
        return 3;
    }
}
void main()
{
    char infx[50], pofx[50], ch, elem;
    int i = 0, k = 0;
    printf("\n\nRead the Infix Expression ? ");
    scanf("%s", infx);
    push('#');
    while ((ch = infx[i++]) != '\0')
    {
        if (ch == '(')
        {
            push(ch);
        }
        else
        {
            if (isalnum(ch))
            {
                pofx[k++] = ch;
            }
            else
            {
                if (ch == ')')
                {
                    while (s[top] != '(')
                    // pofx[k++]=pop();
                    {
                        printf("%c\n", pofx[k++] = pop());
                    }
                    elem = pop();
                    // printf("%c\n",elem);
                }
                else
                {
                    while (pr(s[top]) >= pr(ch))
                    {
                        pofx[k++] = pop();
                    }
                    push(ch);
                }
            }
        }
    }
    while (s[top] != '#')
    {
        printf("%c\n", pofx[k++] = pop());
    }

    pofx[k] = '\0';
    printf("\n\nGiven Infix Expn: %s  Postfix Expn: %s\n", infx, pofx);
}

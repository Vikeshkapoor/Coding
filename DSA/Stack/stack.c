#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isfull(struct stack *s)
{
    if(s->top==s->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int isempty(struct stack *s)
{
    if(s->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    struct stack *s;
    s->size=50;
    s->top=-1;
    s->arr=malloc(s->size*sizeof(int));
    if(isempty(s))
    {
        printf("Stack is empty");
    }
    if(isfull(s))
    {
        printf("Stack is full");
    }
}
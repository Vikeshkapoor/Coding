#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

struct Stack {
    char data[MAX_SIZE];
    int top;
};

void initialize(struct Stack* stack) {
    stack->top = -1;
}

void push(struct Stack* stack, char value) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack overflow\n");
    } else {
        stack->top++;
        stack->data[stack->top] = value;
    }
}

char pop(struct Stack* stack) {
    if (stack->top == -1) {
        printf("Stack underflow\n");
        return '\0';
    } else {
        char value = stack->data[stack->top];
        stack->top--;
        return value;
    }
}

int isCorrectlyParenthesized(const char* expression) {
    struct Stack stack;
    initialize(&stack);

    for (int i = 0; i < strlen(expression); i++) {
        char current = expression[i];
        if (current == '(' || current == '[' || current == '{') {
            push(&stack, current);
        } else if (current == ')' || current == ']' || current == '}') {
            if (stack.top == -1) {
                return 0; // Closing parenthesis without opening one
            }
            char top = pop(&stack);
            if ((current == ')' && top != '(') ||
                (current == ']' && top != '[') ||
                (current == '}' && top != '{')) {
                return 0; // Mismatched parenthesis
            }
        }
    }

    return stack.top == -1; // If stack is empty, expression is correctly parenthesized
}

int main() {
    char expression[MAX_SIZE];
    printf("Enter an expression: ");
    fgets(expression, sizeof(expression), stdin);

    if (isCorrectlyParenthesized(expression)) {
        printf("Expression is correctly parenthesized.\n");
    } else {
        printf("Expression is not correctly parenthesized.\n");
    }

    return 0;
}

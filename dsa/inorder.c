#include <stdio.h>
#include <string.h>

int top = -1;
#define SIZE 100  // Define the size as a macro
char stack[SIZE];

int precedence(char ch) {
    switch (ch) {
        case '^':
            return 3;
        case '*':
        case '/':
            return 2;
        case '+':
        case '-':
            return 1;
        default:
            return 0;
    }
}

void push(char c) {
    if (top == SIZE - 1) {
        printf("Stack is full\n");
    } else {
        top = top + 1;
        stack[top] = c;
    }
}

char pop() {
    char k;
    if (top == -1) {
        return -1;
    } else {
        k = stack[top];
        top = top - 1;
        return k;
    }
}

int main() {
    char infix[SIZE], postfix[SIZE];
    char symbol, next;
    int j = 0;

    printf("Enter the given expression: ");
    scanf("%s", infix);

    for (int i = 0; i < strlen(infix); i++) {
        symbol = infix[i];
        switch (symbol) {
            case '(':
                push(symbol);
                break;
            case ')':
                while ((next = pop()) != '(') {
                    postfix[j] = next;
                    j++;
                }
                break;
            case '^':
            case '*':
            case '/':
            case '+':
            case '-':
                while (top != -1 && precedence(stack[top]) >= precedence(symbol)) {
                    postfix[j] = pop();
                    j++;
                }
                push(symbol);
                break;
            default:
                postfix[j] = symbol;
                j++;
        }
    }

    while (top != -1) {
        postfix[j] = pop();
        j++;
    }

    postfix[j] = '\0';
    printf("Postfix expression: %s\n", postfix);

    return 0;
}
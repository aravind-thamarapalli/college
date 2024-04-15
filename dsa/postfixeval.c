#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<ctype.h>
#define MAX 100
int stack[MAX];
int top = -1;

void push(int item) {
    if(top >= MAX-1) {
        printf("\nStack Overflow.");
    } else {
        stack[++top] = item;
    }
}

int pop() {
    int item;
    if(top < 0) {
        printf("Stack underflow.");
        return -1;
    } else {
        item = stack[top--];
        return(item);
    }
}

int is_operator(char symbol) {
    if(symbol == '^' || symbol == '*' || symbol == '/' || symbol == '+' || symbol == '-') {
        return 1;
    } else {
        return 0;
    }
}

int precedence(char symbol) {
    if(symbol == '^') {
        return 3;
    } else if(symbol == '*' || symbol == '/') {
        return 2;
    } else if(symbol == '+' || symbol == '-') {
        return 1;
    } else {
        return 0;
    }
}

int evaluatePostfix(char* exp) {
    int i, operand1, operand2, result;
    char ch;
    for(i = 0; exp[i] != '\0'; i++) {
        ch = exp[i];
        if(isdigit(ch)) {
            push(ch - '0'); // Push the operand
        } else if(is_operator(ch) == 1) {
            operand2 = pop();
            operand1 = pop();
            switch(ch) {
                case '+': result = operand1 + operand2; break;
                case '-': result = operand1 - operand2; break;
                case '*': result = operand1 * operand2; break;
                case '/': result = operand1 / operand2; break;
                case '^': result = pow(operand1, operand2); break;
            }
            push(result); //Push the result back to the stack
        }
    }
    return stack[top];
}

int main() {
    char exp[100];
    printf("Enter a postfix expression: ");
    gets(exp);
    printf("The result of the postfix expression is: %d", evaluatePostfix(exp));
    return 0;
}

#include <stdio.h>
#include <ctype.h>
#define MAX 100

char stack[MAX];
int top = -1;

// PUSH
void push(char x) {
    stack[++top] = x;
}

// POP
char pop() {
    return stack[top--];
}

// PRIORITY
int priority(char x) {
    if (x == '^') return 3;
    if (x == '*' || x == '/') return 2;
    if (x == '+' || x == '-') return 1;
    return 0;
}

// MAIN
int main() {
    char infix[100], postfix[100];
    int i = 0, j = 0;

    printf("Enter infix expression: ");
    scanf("%s", infix);

    while (infix[i] != '\0') {

        // If operand
        if (isalnum(infix[i])) {
            postfix[j++] = infix[i];
        }

        // If '('
        else if (infix[i] == '(') {
            push(infix[i]);
        }

        // If ')'
        else if (infix[i] == ')') {
            while (stack[top] != '(') {
                postfix[j++] = pop();
            }
            pop(); // remove '('
        }

        // If operator
        else {
            while (top != -1 && priority(stack[top]) >= priority(infix[i])) {
                postfix[j++] = pop();
            }
            push(infix[i]);
        }

        i++;
    }

    // Pop remaining operators
    while (top != -1) {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';

    printf("Postfix expression: %s\n", postfix);

    return 0;
}
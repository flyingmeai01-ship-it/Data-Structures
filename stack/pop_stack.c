#include <stdio.h>
#include <stdlib.h>
#define max 4

int stack_arr[max];
int top = -1;

int isFull() {
    if (top == max - 1) 
        return 1;
    else
        return 0;
}

int isEmpty() {
    if (top == -1)
        return 1;
    else
        return 0;
}
void push(int data) {
    if (isFull()) {
        printf("Stack overflow.\n");
        return;
    }
    top++;
    stack_arr[top] = data;
}
int pop() {
    int value;
    if(isEmpty()) {
        printf("Stack underflow.\n");
        exit(1);
    }
    value = stack_arr[top];
    top--;    
    return value;
}
void print() {
    int i;
    if(top == -1) {
        printf("Stack underflow.\n");
        return;
    }
    for (i = top; i >= 0; i--) {
        printf("%d ", stack_arr[i]);
    }
    printf("\n");
}
int main() {
    int data;
    push(4);
    push(3);
    push(2);
    data = pop();
    printf("%d deleted\n", data);
    print();
    return 0;
}

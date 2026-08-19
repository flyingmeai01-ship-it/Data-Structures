#include <stdio.h>
#define max 4

int stack_arr[max];
int top = -1;

int isFULL() {
    if (top == max - 1) 
        return 1;
    else 
        return 0;
}

void push(int data) {
    if (isFULL()) {
        printf("Stack overflow!\n");
        return;
    }
    top++;
    stack_arr[top] = data;
}

int main() {
    push(4);
    push(3);
    push(2);
    push(1);
    return 0;
}
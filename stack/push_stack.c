#include <stdio.h>
#define max 7

int stack_arr[max], top = -1;

void push(int data) {
    if (top == max - 1) {
        printf("Stack overflow.\n");
        return;
    }
    top++;
    stack_arr[top] = data;
}
int main() { 
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    push(70);
    for (int i = 0; i < max; i++) {
    printf("%d ", stack_arr[i]);
    }
    printf("\n");
    return 0;
}
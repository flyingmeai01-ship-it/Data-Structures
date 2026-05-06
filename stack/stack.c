#include <stdio.h>
#include <stdlib.h>
#define max 5

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
        printf("Stack Overflow!\n");
        return;
    }
    top++;
    stack_arr[top] = data;
    return;
}
int pop() {
    if (isEmpty()) {
        printf("Stack underflow!\n");
    }
    int data;
    data = stack_arr[top];
    top--;
    return data;
}
void peek() {
    if (isEmpty()) {
        printf("Stack underflow!\n");
        exit(1);
    }
        printf("The top most element of the stack: %d\n", stack_arr[top]);
        return;
}
void print() {
    if (isEmpty()) {
        printf("Stack underflow!\n");
        exit(1);
    }
    printf("Printing all elements from the stack: ");
    for (int i = top; i >= 0;  i--) {
        printf("%d ", stack_arr[i]);
    }
    printf("\n");
    return;
}

int main() {
    int choice, data;
    while (1) {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print top element.\n");
        printf("4. print all elements of the Stack.\n");
        printf("5. Quit\n\n\n");
        printf("please enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Please enter the element which you want to push at stack: ");
                scanf("%d", &data);
                push(data);
                printf("%d pushed.\n", data);
                break;

            case 2:
                data = pop();
                printf("%d is popped out from the stack.\n", data);
                break;
           
            case 3:
                peek();
                break;

            case 4:
                print();
                break;

            case 5:
                printf("Program ended. :)\n");
                exit(1);

            default:
                printf("Wrong input!\n");
        }
    }
    return 0;
}

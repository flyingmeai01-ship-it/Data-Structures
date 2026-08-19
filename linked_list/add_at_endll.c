#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

struct node* add_at_end(struct node* ptr, int data) {
    struct node* temp = malloc(sizeof(struct node));
    temp -> data = data;
    temp -> link = NULL;

    ptr -> link = temp;
    return temp;
}

int main() {
    struct node *head = malloc(sizeof(struct node));
    head -> data = 25;
    head -> link = NULL;

    struct node* ptr = head;
    ptr = add_at_end(ptr, 15);
    ptr = add_at_end(ptr, 93);
    ptr = add_at_end(ptr, 67);
    ptr = add_at_end(ptr, 97);
    
    ptr = head;
    while (ptr != NULL) {
        printf("%d\n", ptr -> data);
        ptr = ptr -> link;
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

struct node* add_at_end(struct node* ptr, int pos, int data) {
    struct node* temp = malloc(sizeof(struct node));
    temp -> data = data;
    temp -> link = ptr;
    ptr = temp;
    return ptr;
}

int main() {
    struct node* head = malloc(sizeof(struct node));
    
    return 0;
}
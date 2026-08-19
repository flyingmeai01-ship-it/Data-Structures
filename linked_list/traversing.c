#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};
void traversal(struct node* head) {
    int count = 0;
    if (head == NULL) {
        printf("Linked list is Empty!");
        exit(1);
    }
    struct node* ptr = head;
    while (ptr != NULL) {
        count++;
        ptr = ptr -> link;
    }
    printf("\nThere is %d nodes in this linked list.\n", count);
    return;
}

int main() {
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head -> data = 10;
    head -> link = NULL;

    struct node* current = (struct node*)malloc(sizeof(struct node));
    current -> data = 20;
    current -> link = NULL;
    head -> link = current;

    current = (struct node*)malloc(sizeof(struct node));
    current -> data = 30;
    current -> link = NULL;
    head -> link -> link = current;

    current = (struct node*)malloc(sizeof(struct node));
    current -> data = 100;
    current -> link = NULL;
    head -> link -> link -> link = current;

    traversal(head);
    
    return 0;
}
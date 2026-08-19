#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

void count_head(struct node* head) {
    int count = 0;
    if (head == NULL)
        printf("The linked list is empty.");
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL) {
        count++;
        ptr = ptr -> link;
    }
    printf("The linked list has %d nodes.\n", count);
    return;
}

int main() {
    struct node *head = malloc(sizeof(struct node));
    head -> data = 10;
    head -> link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current -> data = 20;
    current -> link = NULL;
    head -> link = current;

    current = malloc(sizeof(struct node));
    current -> data = 30;
    current -> link = NULL;
    head -> link -> link = current;

    current = malloc(sizeof(struct node));
    current -> data = 40;
    current -> link = NULL;
    head -> link -> link -> link = current;

    count_head(head);
    return 0;
}
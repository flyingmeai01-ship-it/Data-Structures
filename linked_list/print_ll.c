#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

void print_data(struct node *head) {
    if (head == NULL)
        printf("linked list is empty.\n");
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL) {
        printf("%d\n", ptr -> data);
        ptr = ptr -> link;
    }
    return;
}

int main() {
    struct node* head = malloc(sizeof(struct node));
    head -> data = 25;
    head -> link = NULL;

    struct node* current = malloc(sizeof(struct node));
    current -> data = 50;
    current -> link = NULL;
    head -> link = current;

    current = malloc(sizeof(struct node));
    current -> data = 75;
    current -> link = NULL;
    head -> link -> link = current;

    current = malloc(sizeof(struct node));
    current -> data = 100;
    current -> link = NULL;
    head -> link -> link -> link = current;

    print_data(head);
    return 0;
}
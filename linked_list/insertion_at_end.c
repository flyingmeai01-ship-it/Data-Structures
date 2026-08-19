#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

void insert_end_node(struct node* head, int data) {
    struct node *ptr, *temp;

    temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = data;
    temp -> link = NULL;
    ptr = head;

    while (ptr -> link != NULL) {
        ptr = ptr -> link;
    }
    ptr -> link = temp;
    return;
}

void print_ll(struct node* head) {
    if (head == NULL) {
        printf("linked lsit is empty.\n");
    }
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL) {
        printf("%d\n", ptr -> data);
        ptr = ptr -> link;
    }
    return;
}

int main() {
    struct node *head = malloc(sizeof(struct node));
    head -> data = 6;
    head -> link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current -> data = 9;
    current -> link = NULL;
    head -> link = current;

    current = malloc(sizeof(struct node));
    current -> data = 12;
    current -> link = NULL;
    head -> link -> link = current;

    insert_end_node(head, 15);
    print_ll(head);
    return 0;
}
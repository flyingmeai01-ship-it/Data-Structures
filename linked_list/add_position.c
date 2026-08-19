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
void add_at_pos(struct node* head, int pos, int data) {
    struct node *ptr = head;
    struct node* ptr2 = malloc(sizeof(struct node));
    ptr2 -> data = data;
    ptr2 -> link = NULL;
    
    int i = 1;
    while (i != pos ) {
        ptr = ptr -> link;
        i++;
    }
    ptr2 -> link = ptr -> link;
    ptr -> link = ptr2;
}

int main() {
    struct node* head = malloc(sizeof(struct node));
    head -> data = 1;
    head -> link = NULL;

    struct node* ptr = head;
    int n, data;
    printf("Enter how many nodes do u want: ");
    scanf("%d", &n);

    printf("Enter data for linked list's node ");
    for (int i = 1; i <= n; i++) {
        scanf("%d", &data);
        ptr = add_at_end(ptr, data);
    }

    int pos;
    printf("Enter psoition and data: ");
    scanf("%d %d", &pos, &data);
    add_at_pos(head, pos, data);

    ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr -> data);
        ptr = ptr -> link;
    }

    return 0;
}
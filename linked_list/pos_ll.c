#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

struct node* add_position(struct node* head, int pos, int data) {
    int i, count = 0;
    if (head == NULL) {
        printf("lunked list is empty.\n");
        exit(1);
    }
    struct node* ptr = head;
    while (count != pos) {
        count++;
        ptr = ptr -> link;
    }
    struct node* temp = malloc(sizeof(struct node));
    if (temp == NULL) {
        printf("memory not allowted.");
        exit(1);
    }
    temp -> data = data;
    temp -> link = ptr;


}

int main() {
    struct node* head = malloc(sizeof(struct node));
    head -> data = 1;
    head -> link = NULL;

    struct node* current = malloc(sizeof(struct node));
    current -> data = 2;
    current -> link = NULL;
    head -> link = current;

    current = malloc(sizeof(struct node));
    current -> data = 4;
    current -> link = NULL;
    head -> link -> link = current;

    int pos, data;
    printf("Enter position and data: ");
    scanf("%d %d", &pos, &data);
    add_position(head, pos, data);
    
    struct node* ptr = head;
    while (ptr != NULL) {
        printf("%d\n", ptr -> data);
        ptr = ptr -> link;
    }
    return 0;
}
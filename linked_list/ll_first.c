#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main() {
    struct node *head = malloc(sizeof(struct node));
    head -> data = 99;
    head -> link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current -> data = 88;
    current -> link = NULL;
    head -> link = current;

    current = malloc(sizeof(struct node));
    current -> data = 77;
    current -> link = NULL;
    head -> link -> link = current;

    printf("data1: %d\n", head -> data);
    printf("data2: %d\n", head -> link -> data);  
    printf("data3: %d\n", head -> link -> link -> data);
}
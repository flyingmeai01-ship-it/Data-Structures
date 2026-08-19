#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};
// } *top = NULL;

// struct node* push(struct node* head, int data) {
//     struct node* ptr = malloc(sizeof(struct node));
//     if (ptr == NULL) {
//         printf("Stack overflow!");
//         exit(1);
//     }

// }

int main() {
    struct node* link;
    printf("%ld\n", sizeof(struct node));
    printf("%ld\n", sizeof(link));
    return 0;
}
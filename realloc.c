//  This is the program for reallocating memory as require, like if we need more, we can increase or decreace size.
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, n, p;
    printf("Enter how many integers do you wanna store? ");
    scanf("%d", &n);

// First allocation
    int *ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL) {
        printf("Error! memory was not alloated");
        exit(1);
    }

    for (i = 0; i < n; i++) {
        printf("Enter %d integer: ", i + 1);
        scanf("%d", ptr + i);
    }
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\nEnter how many more integers do you wanna store?\n");
    scanf("%d", &p);

 // Reallocation 
    ptr = (int*)realloc(ptr, n + p * sizeof(int));
    if (ptr == NULL) {
        printf("Error! memory is not allocated");
        exit(1);
    }

    for (i = n; i < n + p; i++) {
        printf("Enter %d integer ", i + 1);
        scanf("%d", ptr + i);
    }

    printf("Printing all integers... ");
    for (i = 0; i < n + p; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    return 0;
}
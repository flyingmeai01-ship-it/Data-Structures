#include <stdio.h>
#include <stdlib.h>
#define n 5

int *input() {

    int i, *ptr = (int*)calloc(n, sizeof(int));
    if (ptr == NULL) {
        printf("Error! memory is not allocateed\n");
        exit(1);
    }
    printf("Enter %d integers....\n", n);
    for (i = 0; i < n; i++) {
        printf("Enter an integer: ");
        scanf("%d", ptr + i);
    }
    return ptr;
}

int main(void) {
    int i, sum = 0;
    int *ptr = input();

    for (i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    printf("Sum = %d\n", sum);
    free(ptr);
    ptr = NULL;
    return 0;
}
// Program to alloating memory by using calloc function.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n;
    printf("Enter how many integer do you wanna store? ");
    scanf("%d", &n);

// Here we are alloating memory to store integers

    int* ptr = (int*)calloc(n, sizeof(int));
    if (ptr == NULL) {
        printf("Error! memory is not alloated");
        exit(1);
    }

    for (i = 0; i < n; i++) {
        printf("Enter %d integer: ", i + 1);
        scanf("%d", ptr + i);
    }
    
    printf("These are the %d integers which you have stored\n", n);

    for (i  = 0; i < n; i ++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    return 0;

}
#include <stdio.h>

int main() {
    int arr[] = {2, 4, 5, 9, 12, 18, 3, 5, 10};
    int i, size = sizeof(arr)/sizeof(arr[1]);

    int arr2[size + 1];
    printf("Enter the number which u want add at beginning: ");
    scanf("%d", &arr2[0]);
    for (i = 0; i < size + 1; i++) {
        arr2[i + 1] = arr[i];
    }
    for (i = 0; i < size + 1; i++) {
    printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}
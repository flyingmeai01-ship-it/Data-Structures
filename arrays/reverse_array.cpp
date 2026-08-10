#include <iostream>

void Reverse_Array(int arr[], int size);
void swap(int *x, int *y);
int main() {
    int size;
    std::cout << "Enter size of the Array: ";
    std::cin >> size;
    int arr[size];
    std::cout << "Enter array elements: \n";
    
    // Initialize the Array with user input.

    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    // Printing the Original Array.
    std::cout << "\nOriginal Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i];
        if (i < size - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
    // Calling the Reverse_Array function to reverse the Array.
    Reverse_Array(arr, size);
    return 0;
}
// Swap function for Swaping the Array elements.
void swap(int* x, int* y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
// Reverse function for reversing the array this function the swap for reversing the array.
void Reverse_Array(int arr[], int size) {
    int start = 0, end = size - 1;
    // Here, I have used the start and end variables they are used as array indexs
    // To swap the array elements and reverse the array.
    while (start < end) {
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }

    // Now printing the Reverse Array.
    std::cout << "Reverse Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i];
        if (i < size - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
    return;
}
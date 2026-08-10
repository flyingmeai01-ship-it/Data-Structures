#include <iostream>

void swap(int*, int*);
int main() {
    int a = 78, b = 87;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    swap(&a, &b);
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    return 0;
}
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
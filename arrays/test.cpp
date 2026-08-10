// Program to find unique element in an array.

#include <iostream>

int uniquie(int arr[], int s) {
    int key;
    bool fd;
    for (int i = 0; i < s; i++) {
        key = arr[i];
        for (int j = 0; j < s; j++) {
            if (i == j) {
                continue;
            }
            else if (key == arr[j]){
                fd = true;
                break;
            }
            else {
                fd = false;
                break;
            }
        }
        if (fd == 0) {
            return key;
        }
    }
    return -1;
}
int main() {
    int test[] = {2, 3, 4, 2, 4, 5, 5};
    int size = sizeof(test)/sizeof(test[0]);

    int uniq = uniquie(test, size);
    if (uniq != -1) {
        std::cout << "The uniquie element is: " << uniq << std::endl;
    }
    else {
        std::cout << "No uniquie element in our array!" << std::endl;
    }
    return 0;
}

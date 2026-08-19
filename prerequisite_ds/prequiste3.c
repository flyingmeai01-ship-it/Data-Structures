#include <stdio.h>

struct coordinates {
    int x;
    int y;
    int z;
};

// Passing pointer to structure as argument...

void print(struct coordinates *ptr) {
    printf("(%d, %d, %d)\n", ptr->x, ptr->y, ptr->z);
}

int main(void) {
    struct coordinates c1 = {10, 20, -21};
    struct coordinates c2 = {11, -12, 30};
    struct coordinates c3 = {-2, -5, 1};

    print(&c1);
    print(&c2);
    print(&c3);
    return 0;
}
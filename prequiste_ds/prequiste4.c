#include <stdio.h>

struct point {
    int x;
    int y;
};
// Returning structure variable from a function...
struct point edit(struct point p) {
    (p.x)++;
    (p.y)--;
    return p;
}

void print(struct point p) {
    printf("(%d %d)\n", p.x, p.y);
}

int main(void) {
    struct point p1 = {10, 20};
    struct point p2 = {99, 101};
    p1 = edit(p1);
    p2 = edit(p2);
    print(p1);
    print(p2);

    return 0;
}
#include <stdio.h>

struct charset {
    char x;
    int y;
};
// Passing structure member as arguments...

void keyvalue(char* x, int* y) {
    printf("Enter keyvalue pairs: ");
    scanf("%c %d", x, y);
}

int main(void) {
    struct charset cs;
    keyvalue(&cs.x, &cs.y);
    printf("(%c, %d)", cs.x, cs.y);
    return 0;
}
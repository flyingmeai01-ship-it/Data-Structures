#include <stdio.h>

struct sa {
    char name[25];
    int age;
    char *class;
    float marks;
};

// Passing structure member as argument

void print(char name[25], int age, char *class, float marks) {
    printf("%s, %d, %s, %.2f\n", name, age, class, marks);
}

int main(void) {
    struct sa wee = {"Bhagyawan", 18, "BTech", 85.8};
    print(wee.name, wee.age, wee.class, wee.marks);

    return 0;
}
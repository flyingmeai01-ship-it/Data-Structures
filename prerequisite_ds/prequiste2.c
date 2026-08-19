#include <stdio.h>

struct org_mem {
    char name[30];
    int age;
    int identity_no;
    char *role;
};
// Passing struct variable as arguments

void print(struct org_mem p) {
    printf("{%s, %d, %d, %s}\n", p.name, p.age, p.identity_no, p.role);
}

int main(void) {
    struct org_mem p1 = {"Sohan", 28, 24565, "Researcher"};
    struct org_mem p2 = {"Prajyan", 29, 25467, "Manager"};
    print(p1);
    print(p2);
    return 0;
}
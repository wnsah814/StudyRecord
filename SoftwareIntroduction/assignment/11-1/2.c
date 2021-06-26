#include <stdio.h>

typedef struct{
    char name[15];
    int age;
} person;

int main() {
    person p1;
    scanf("%s %d", &p1.name, &p1.age);
    printf("name: %s\n", p1.name);
    printf("age: %d\n", p1.age);

    return 0;
}
#include <stdio.h>
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 5, num2 = 10;
    swap(&num1, &num2);
    printf("num1 : %d\nnum2 : %d", num1, num2);
    return 0;
}
#include<stdio.h>

void square(double* a) {
    *a *= *a;
}

int main() {
    double dvar;
    scanf("%lf", &dvar);
    square(&dvar);
    printf("%lf", dvar);

    return 0;
}
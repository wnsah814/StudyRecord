#include<stdio.h>
int main(){
    double a = 1.23456789;
    double b = 0.0000123456789;

    printf("%.10lf %.10lf\n", a, b);
    printf("%e %e\n", a, b);
    printf("%E %E\n", a, b);
    printf("%g %g\n", a, b);
    printf("%G %G\n", a, b);

    return 0;
}
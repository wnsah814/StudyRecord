#include<stdio.h>
int main(){
    int a;
    double b;
    scanf("%d %lf", &a, &b);
    printf("%10d %10d %10d\n", 2*a, 4*a, 8*a);
    printf("%10.2lf %10.2lf %10.2lf\n", 2*b, 4*b, 8*b);

    return 0;
}
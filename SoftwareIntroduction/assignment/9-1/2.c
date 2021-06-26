#include <stdio.h>
int main(){
    int i;
    double d;
    char c;
    scanf("%d %lf %c", &i, &d, &c);
    int* pi = &i;
    double* pd = &d;
    char* pc = &c;

    printf("i: %d, %p\n", i, pi);
    printf("d: %lf, %p\n", d, pd);
    printf("c: %c, %p\n\n", c, pc);

    printf("i+1: %d\n", *pi+1);
    printf("d+1: %lf\n", *pd+1);
    printf("c+1: %c\n\n", *pc+1);

    printf("size of pi: %ld\n", sizeof(pi));
    printf("size of pd: %ld\n", sizeof(pd));
    printf("size of pc: %ld\n", sizeof(pc));    
}
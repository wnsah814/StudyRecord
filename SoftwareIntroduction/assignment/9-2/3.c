#include<stdio.h>
int main(){
    double arr[5];
    double* parr = &arr[0];
    int i;
    double sum = 0;

    for(i = 0; i < 5 ; i++) {
        scanf("%lf", parr + i);
    }

    for(i = 0; i < 5 ; i++) {
        *(parr+i) = (*(parr+i))*2;
        printf("%lf\n", *(parr + i));
        sum += *(parr+i);
    }

    printf("sum: %lf", sum);

    return 0;
}
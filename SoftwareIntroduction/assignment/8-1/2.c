#include<stdio.h>
int gMul = 1;

int addTotal(int a){
    int sum = 0;
    for(int i=1; i<=a; i++){
        sum += i;
    }
    return sum;
}

void mulTotal(int a){
    for(int i=1; i<=a; i++){
        gMul *= i;
    }
}
int main(){
    int N; scanf("%d", &N);
    printf("addTotal(): %d\n", addTotal(N));
    mulTotal(N);
    printf("gMul: %d\n", gMul);

    return 0;
}
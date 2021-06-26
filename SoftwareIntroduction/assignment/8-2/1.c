#include<stdio.h>
void printLine(int a) {
    for(int i = 1; i<=a; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int main(){
    int N; scanf("%d", &N);
    for(int i=1; i<=N; i++) {
        printLine(i);
    }
    for(int i=N; i>0; i--) {
        printLine(i);
    }

    return 0;
}
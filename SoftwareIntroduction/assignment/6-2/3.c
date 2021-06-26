#include<stdio.h>
int main(){
    int N; scanf("%d", &N);
    if(N < -10) {
        printf("n < -10\n");
    } else if(-10 <= N && N  < 0){
        printf("-10 <= n < 0\n");
    } else if(0 <= N && N < 10) {
        printf("0 <= n < 10\n");
    } else {
        printf("n >= 10\n");
    }
    return 0;
}

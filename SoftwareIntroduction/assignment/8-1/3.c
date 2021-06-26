#include<stdio.h>
int recursiveF(int a) {
    if(a==0){
        return 0;
    } else {
        return a + recursiveF(a-1);
    }
}
int main(){
    int N; scanf("%d", &N);
    printf("%d", recursiveF(N));
    return 0;
}
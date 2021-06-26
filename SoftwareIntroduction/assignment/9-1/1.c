#include <stdio.h>
int main(){
    int i; scanf("%d", &i);
    int* pi = &i;
    printf("%d\n", *pi);
    printf("%d", *pi+10);
    return 0;
}
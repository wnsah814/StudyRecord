#include<stdio.h>
#include<stdlib.h>

int returnMax(int a, int b) {
    if(a>b) {
        return a;
    } else {
        return b;
    }
}

int returnMin(int a, int b) {
    if(a>b) {
        return b;
    } else {
        return a;
    }
}

int main() {
    int num;
    int min, max;

    scanf("%d", &num);

    int* ptr = (int*)malloc(sizeof(int)*num);

    for(int i=0; i<num; i++) {
        scanf("%d", &ptr[i]);
    }
    min = ptr[0];
    max = ptr[0];

    for(int i=0; i<num; i++) {
        min = returnMin(min, ptr[i]);
        max = returnMax(max, ptr[i]);
    }

    printf("min: %d\n", min);
    printf("max: %d", max);
    free(ptr);

    return 0;
}
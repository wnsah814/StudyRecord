#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int xpos;
    int ypos;
} Point;

int main() {
    int* pi = (int*)malloc(sizeof(int)*5);
    Point* pp = (Point*)malloc(sizeof(Point)*2);

    // for(int i=0; i<5; i++) {
    //     scanf("%d", &pi[i]);
    // }

    // for(int i=0; i<5; i++) {
    //     printf("%d ", pi[i]);
    // }
    // printf("\n");


    for(int i=0; i<2; i++) {
        printf("Point[%d]\n", i);
        printf("xpos: ");
        scanf("%d", &pp[i].xpos);
        printf("ypos: ");
        scanf("%d", &pp[i].ypos);
    }

    for(int i=0; i<2; i++) {
        printf("Point#%d : (%d, %d)\n", i, pp[i].xpos, pp[i].ypos);
    }


    free(pi);
    free(pp);
    return 0;



}
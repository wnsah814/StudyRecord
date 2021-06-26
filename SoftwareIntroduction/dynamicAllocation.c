#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int xpos;
    int ypos;
} Point;

int main() {
    int* pi = (int*)malloc(sizeof(int));
    double* pd = (double*)malloc(sizeof(double));

    Point* ppt = (Point*)malloc(sizeof(Point));

    int* pia;
    Point* ppta;
    int n;

    *pi = 10;
    *pd = 3.13;

    ppt->xpos = 3;
    ppt->ypos = 2;

    printf("%d\n", *pi);
    printf("%lf\n", *pd);
    printf("%d %d\n", (*ppt).xpos, (*ppt).ypos);
    printf("%d %d\n", ppt->xpos, ppt->ypos);

    printf("Length of Array: ");
    scanf("%d", &n);

    pia = (int*)malloc(n * sizeof(int));
    for(int i=0; i<n; i++) {
        printf("[%d] -> ", i);
        scanf("%d", &pia[i]);
    }

    for(int i=0; i<n; i++) {
        printf("%d ", pia[i]);
    }
    printf("\n");

    free(pi);
    free(pd);
    free(ppt);
    free(pia);
}
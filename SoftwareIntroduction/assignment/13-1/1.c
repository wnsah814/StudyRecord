#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int xpos;
    int ypos;
} Point;

int main() {
    Point* ptr = (Point*)malloc(sizeof(Point));
    scanf("%d %d", &ptr->xpos, &ptr->ypos);
    printf("%d %d", ptr->xpos, ptr->ypos);
    
    free(ptr);

    return 0;
}
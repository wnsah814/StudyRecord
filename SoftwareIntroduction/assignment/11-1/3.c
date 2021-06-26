#include <stdio.h>

typedef struct {
    int xpos;
    int ypos;
} Point;

Point getScale2xPoint(const Point* pp) {
    Point newP;
    newP.xpos = pp -> xpos * 2;
    newP.ypos = pp -> ypos * 2; 
    return newP;
}

int main() {
    Point p1, p2;
    scanf("%d %d", &p1.xpos, &p1.ypos);
    p2 = getScale2xPoint(&p1);
    printf("%d %d", p2.xpos, p2.ypos);
    
    return 0;
}
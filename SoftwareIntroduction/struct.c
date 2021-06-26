#include <stdio.h>

struct point //새로운 데이터 타입 정의
{
    int xpos;
    int ypos;
};

//struct person {
//    char name[20];
//    char phoneNum[20];
//    int age;
//};

//이미 존재하는 자료형에 새로운 이름 붙이기
typedef unsigned int UNIT;
UNIT count;

//같이 사용하면
typedef struct point Point;
Point pos1;

//way2
typedef struct point2 {
    int xpos;
    int ypos;
} Point2;

//way3
typedef struct {
    int xpos;
    int ypos;
} Point3;


int main() {

    struct point p1, p2;

    p1.xpos = 10;
    p1.ypos = 20;

    scanf("%d %d", &p2.xpos, &p2.ypos);

    printf("p1(%d, %d)\n", p1.xpos, p1.ypos);
    printf("p2(%d, %d)", p2.xpos, p2.ypos);


        
    // Point3 p3;
    // p3.xpos = 10;
    // p3.ypos = 20;
    Point3 p3 = {10, 20};


    struct point p4 = { 1, 2};
    struct point* ptr = &p4;

    //(*ptr).xpos = 10;
    //(*ptr).ypos = 20;
    ptr -> xpos = 10;
    ptr -> ypos = 20;


    return 0;

}
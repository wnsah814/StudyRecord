#include<stdio.h>
void printString(const char* str) {
    printf("%s\n", str);
}

int main() {
    const char* strArr[3] = {"One", "Two", "Three"};

    void (*fptr)(const char* str);
    fptr = printString;
    for(int i=0; i<3; i++)
        fptr(strArr[i]);

    return 0;
}
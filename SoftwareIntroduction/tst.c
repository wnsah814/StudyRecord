#include <stdio.h>

int main() {
    int num = 0;
    while(1) {
        num ++;
        if(num%2 == 0) 
            continue;
        if(num>10) 
            break;
        printf("%d", num);
    }
}
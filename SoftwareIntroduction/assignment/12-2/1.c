#include<stdio.h>

void swap(char** str1, char** str2) {
    char* temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

void printArray(char ** arr, int len) {
    printf("Array ");
    for(int i=0; i<len; i++) {
        printf("[%d]:%s, ",i, arr[i]);
    }
    printf("\n");
}
int main() {
    char* strArr[2] = {"aaa", "bbb"};
    printArray(strArr, sizeof(strArr)/sizeof(char*));
    swap(&strArr[0], &strArr[1]);
    printArray(strArr, sizeof(strArr)/sizeof(char*));
}
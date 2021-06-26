#include<stdio.h>
int main() {
    char str1[] = "String1";
    const char* str2 = "String2";
    //char* str3 = "so dangerous when you overwrite - computer stops";
    
    printf("%s %s\n", str1, str2);

    str1[2] = 'X';
    //str2[2] = 'X';

    //str1 = "New string";
    str2 = "New String";

    return 0;
}
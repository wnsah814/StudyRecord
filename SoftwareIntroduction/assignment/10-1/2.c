#include<stdio.h>
#include<string.h>

int main() {
    char str[10];
    scanf("%s", str);

    for(int i=0; i<strlen(str); i++) {
        if(65<=str[i]&&str[i]<=90) {
            str[i] += 32;
        } else {
            str[i] -= 32;
        }
    }

    for(int i = 0; i < strlen(str); i ++) {
        printf("%c", str[i]);
    }

    return 0;
}
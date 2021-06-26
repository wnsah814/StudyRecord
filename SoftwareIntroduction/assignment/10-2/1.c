#include <stdio.h>
#include <string.h>

int main() {
    char str[20] = {};
    int palindrome = 1;

    scanf("%s", str);

    for(int i=0; i<strlen(str)/2; i++) {
        if(str[i] != str[strlen(str)-i-1])
            palindrome = 0;
    }

    if(palindrome == 1) 
        printf("This is a palindrome");
    else 
        printf("This is not a palindrome");

    return 0;

}
#include<stdio.h>
#include<string.h>

int main(){
    char str1[10], str2[10], str_concat[25] = {};

    scanf("%s %s", str1, str2);
    strcat(str_concat, str1);
    strcat(str_concat, str2);
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("length of str1: %d\n", strlen(str1));
    printf("length of str2: %d\n", strlen(str2));
    printf("str1+str2: %s\n", str_concat);
    if(strcmp(str1, str2) == 0)
        printf("same\n");
    else 
        printf("not same\n");

    return 0;
}

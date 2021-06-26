#include<stdio.h>
int main(){
    char a;
    while(1){
        scanf(" %c", &a);
        if(48<=a&&a<=57){
            printf("-> %c\n", a);
        } else if(65<=a&&a<=90) {
            printf("-> %c\n", a+32);
        } else if(97<=a&&a<=122) {
            printf("-> %c\n", a-32);
        } else {
            printf("exit");
            break;
        }
    }

    return 0;
}
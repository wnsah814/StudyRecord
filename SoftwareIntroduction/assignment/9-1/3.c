#include <stdio.h>
char st[100];
int main(){
    scanf("%s", st);
    for(int i=0; i<sizeof(st); i++){
        if(st[i]==0){
            printf("%d", i);
            break;
        }
    }
    return 0;
}

#include<stdio.h>
int main(){
    int a,b,c;
    int min, max;
    scanf("%d %d %d", &a, &b, &c);
    
    if(a>b){
        if(a>c){
            max = a;
            if(b>c){
                min = c;
            } else {
                min = b;
            }
        } else {
            max = c;
            min = b;
        }
    } else {
        if(b>c){
            max = b;
            if(a>c){
                min = c;
            } else {
                min = a;
            }
        } else {
            max = c;
            min = a; 
        }
    }
    
    printf("min: %d\n", min);
    printf("max: %d\n", max);
    
    return 0;
}

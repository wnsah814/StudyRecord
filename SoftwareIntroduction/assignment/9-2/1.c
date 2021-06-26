#include<stdio.h>
int main(){
    int ar[5];
    int max, min, sum=0;
    for(int i=0; i<5; i++){
        scanf("%d", &ar[i]);
    }
    max = ar[0];
    min = ar[0];

    for(int i=0; i<5; i++){
        sum += ar[i];
        if(max < ar[i]){
            max = ar[i];
        }
        if(min > ar[i]){
            min = ar[i];
        }
    }
    printf("min: %d\n", min);
    printf("max: %d\n", max);
    printf("sum: %d", sum);
    return 0;
}
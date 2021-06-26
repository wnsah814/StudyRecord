#include<stdio.h>
int main(){
    int arr[5];
    int* parr = arr;
    int i, j, temp;
    int len = sizeof(arr)/sizeof(int);
    
    for(i=0; i<len; i++) {
        scanf("%d", arr+i);
    }

    //Reverse
    for(i=len-1; i>=0; i--) {
        for(j=0; j < i; j++) {
            temp = *(arr+j);
            *(arr+j)= *(arr+j+1);
            *(arr+j+1) = temp;
        }
    }

    for(i=0; i<len; i++) {
        printf("%d ", *(parr+i));
    }
    
    return 0;
}
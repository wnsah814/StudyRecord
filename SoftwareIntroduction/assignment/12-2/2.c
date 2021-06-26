#include<stdio.h>
#include<string.h>

int main() {
    char strarr[10][20] = {};
    char str_temp[20];
    int len = 0;
    int ok = 1;

    //Get words
    for(int i=0; i<10; i++) {
        printf("Enter a word (Enter 'end' to quit): ");
        scanf("%s", str_temp);

        for(int j=0; j<len; j++) {
            if(strcmp(str_temp, strarr[j])==0) {
                ok = 0;
                printf("This word already exist. Please enter another word.\n");
                i--;
                break;
            }
        }

        if(ok==1) {
            if(strcmp(str_temp, "end")==0) {   
                break;
            } else {
                strcpy(strarr[i], str_temp);
            }
        }
        
        len = i+1;
        ok = 1;
    }

    //Show words
    printf("%d words in the list:\n", len);
    for(int i=0; i<len; i++) {
        printf("%s ", strarr[i]);
    }
    printf("\n");

    //Search the word
    for(int i=0; i<10; i++) {
        printf("Enter a word to search (Enter 'end' quit): ");
        scanf("%s", str_temp);

        if(strcmp(str_temp, "end")==0) 
            break;
        
        for(int j=0; j<len; j++) {
            if(strcmp(str_temp, strarr[j])==0) {
                printf("This word is in the list.\n");
                break;
            }
            if(j==len-1) {
                printf("This word is NOT in the list.\n");
            }
        }
    }

    return 0;
}
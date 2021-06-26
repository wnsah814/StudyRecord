#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    char playerName[20];
    int randomNum, playerNum;

    printf("Hello! What is your name?\n");
    scanf("%s", playerName);
    printf("%s", playerName);
    printf("Well, %s, I am thinking of a number between 1 and 20\n", playerName);
    printf("Take a guess.\n");

    srand(time(NULL));
    randomNum = (rand()%20)+1;

    for(int guessTaken=0; guessTaken < 6; guessTaken++) {
        if(randomNum > playerNum) {
            printf("Bigger.\n");
        } else if(randomNUm < playerNum) {
            printf("Smaller\n");
        } else {
            printf("Good job!\n");
            break;
        }
    }


    return 0;
}
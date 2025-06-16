#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int random = rand() % 2;

    char user_input;
    printf("Heads or tails (h/t):\n");
    scanf("%c",&user_input);

    if (user_input=='h' && random==0){
        printf("It was heads well done!");
    }else if (user_input=='t' && random==0){
        printf("It was tails well done!");
    }else{
        printf("Try again!");
    }
    return 0;
}
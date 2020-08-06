#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define ROUND 3

int main(){
    char name[15];
    int i=0,head=0,tail=0;
    srand((unsigned int)time(NULL));

    printf("Who are you?\n> ");
    scanf("%s",name);
    printf("Hello, %s!\n",name);

    printf("Tossing a coin...\n");

    for(i=1;i<=ROUND;i++){
        if(rand()%2 == 0){
            printf("Round %d: Heads\n",i);
            head++;
        }else{
            printf("Round %d: Tails\n",i);
            tail++;
        }
    }
    printf("Heads: %d, Tails: %d\n",head,tail);

    return 0;
}
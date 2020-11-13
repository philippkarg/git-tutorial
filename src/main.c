#include <stdio.h>
#include "/home/rtos-sim/git-tutorial/lib/espl_lib.h"

int main(){
    unsigned int num = 0;
    char exit = 'y';
    do{
        printf("Please type in number (>0): ");
        scanf("%u" ,&num);

        printf("%s\n" ,num_to_words(num));
        printf("If you want to run another number type \"y\" if you want to quit program type \"q\".");
        scanf(" %c", &exit);
    }while(exit == 'y');

    return 0;
}
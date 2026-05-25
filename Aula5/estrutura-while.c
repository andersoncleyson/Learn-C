#include <stdio.h>

int main(void){

    /*Estrutura de repetição (while)*/

    int i = 0;
    while (i < 10){
        printf("%d\n", i);
        i += 2;
    }

    do {
        printf("%d\n", i);
        i--;
    } while (i > 0);

    return 0;
}
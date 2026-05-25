#include <stdio.h>

int main(void){

    /*Estrutura de decisão
        --> if .. else if .. else
    */

    for (int i = 0; i <= 20; i++){
        if (i % 2 == 0) {
            printf("%d é par \n", i);
        } else if (i % 15 == 0) {
            printf("%d é impar divisivel por 3 e 5\n", i);
        } else {
            printf("%d é impar \n", i);
        }
    }

    return 0;
}
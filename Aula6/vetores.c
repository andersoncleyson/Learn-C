#include <stdio.h>

int main(void) {

    float notas[4];

    notas[0] = 7.5;
    notas[1] = 6.0;
    notas[2] = 9.0;
    notas[3] = 4.0;

    int notasVetorLenght = sizeof(notas) / sizeof(notas[0]); 

    float sum = 0;

    puts("===========");
    for(int i = 0; i < notasVetorLenght; i++){
        sum += notas[i];
        printf("Bim. %d: %f.1f\n", i + 1, notas[i]);
    }
    puts("=============");
    printf("Média: %.1f\n", sum / notasVetorLenght);
    puts("=============");

    return 0;

}
#include <stdio.h>

#define NBIM 4

float favg(float *arr, int size) {
    float sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }

    return sum / size;
}

int main(void) {

    float notas[NBIM];

    notas[0] = 7.5;
    notas[1] = 6.0;
    notas[2] = 9.0;
    notas[3] = 4.0;

    float avg = favg(notas, NBIM);

    puts("===========");
    for (int i = 0; i < NBIM; i++){
        printf("Bim. %d: %.1f\n", i + 1, notas[i]);
    }

    printf("Média: %.1f\n", avg);
    puts("=============");

    return 0;

}
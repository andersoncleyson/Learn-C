#include <stdio.h>

int main(void){

    //Declaração de valor
    float notas[4];

    notas[0] = 7.5;
    notas[1] = 8.9;
    notas[2] = 6.0;
    notas[3] = 10.0;

    //Inicialização da vetor...
    int vetor[3] = {1, 2, 3};

    //Inicialização sem número de elementos...
    char c[] = {65, 66, 67, 68, 69}; //char[5]
    char str[] = "string"; // = {'s', 't', 'r', 'i', 'n', 'g', '\0'}

    // Inicialização parcial...
    int n[6] = {1, 2, 3}; // = {0, 0, 0, 0, 0};

    // Inicialização com zeros...
    int z[5] = {0}; // = {0, 0, 0, 0, 0};

    // Inicialização com elementos de mesmo valor...
    int r[4] = {23}; // = {23. 0, 0 ,0};

    for (int i = 0; i < 4; i++) r[i] = 23;

}
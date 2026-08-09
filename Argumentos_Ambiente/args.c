#include <stdio.h>

void print_list(char *list[]);

int main(void) {
    // Vetor de elementos do tipo 'ponteiro para char'
    char *lista[] = {
        "carro",
        "bola",
        "peteca",
        NULL
    };

    print_list(lista);

    return 0;
}

void print_list(char *list[]){
    int i = 0;

    while(list[i] != NULL) {
        printf("[%d] => %p => %s\n", i, list[i], list[i]);
        i++;
    }
} 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char **environ;

void print_list(char *list[]);

int main(int argc, char **argv){

    char *env = getenv("SHELL");
    printf("env => %s\n", env);

    print_list(environ);

    return 0;
}

void print_list(char *list[]){
    int i = 0;

    while(list[i] != NULL) {
        char *sinal_igual = strchr(list[i], '=');

        if (sinal_igual != NULL){
            char *valor = sinal_igual + 1;
            printf("[%d] => %p => %s\n", i, valor, valor);
        }
        
        i++;
    }
}

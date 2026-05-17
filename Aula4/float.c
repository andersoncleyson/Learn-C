#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
	float f = 3e10;

	printf("O tamanho de f (float): %zu bytes / %zu bits\n", sizeof f, sizeof f * 8);

	printf("Valor de f: %f\n", f);

	return 0;
}

#include <stdio.h>
#include <limits.h>

int main(void) {
	int i = INT_MAX;

	printf("O tamanho de i (int): %zu byes / %zu bits\n", sizeof i, sizeof i *8);
	printf("O valor de i: %d\n", i);

	return 0;
}

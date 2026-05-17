#include <stdio.h>

int main(void) {

	int a = 16;
	int b = 42;

	puts("Var	Address		Size 	Value");

	printf("a -> %p \t%4zu %5d\n", &a, sizeof(a), a);
	printf("b -> %p \t%4zu %5d\n", &b, sizeof(b), b);

	return 0;

}

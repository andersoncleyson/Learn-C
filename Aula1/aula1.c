#include <stdio.h>

int main(void){
	int ret = 0;
	ret = printf("Hello, friend\n");
	printf("%x - %x - %x - %x\n", ret, 10, 0xa, 'A');
	return 0;
}

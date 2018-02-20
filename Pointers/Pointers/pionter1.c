#include <stdio.h>

int main(void) {
	char c = 'A';
	printf("c has the value of %c, and is at address %p", c, &c);
	getchar();
}
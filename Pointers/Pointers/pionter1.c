#include <stdio.h>

int main(void) {
	char c = 'A';
	printf("c has the value of %c, and is at address %p", c, &c);
	getchar();

	char *name = "john";
	printf("%s(%p)", name, name);
	getchar();

	int i = 50;
	int *ptr_i = &i;
	printf("%i %p", i,&i);
	getchar();

	//this will crush the program
	//char *str = 356859;
	//printf("%s", str);
	//getchar();

	int i = 50;
	int ptr_i = &i;
	int b = ptr_i;
	printf(i);
	printf(ptr_i);
	printf(b); 
	getchar();

}
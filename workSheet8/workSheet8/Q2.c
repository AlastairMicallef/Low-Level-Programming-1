#include <stdio.h>

int main(void) {

	int number;
	int array[20];
	int i = 0;
	scanf_s("%d", &number);//Number of scanfs
	while (i<number)
	scanf_s("%d", &array[i++]);
	return 0;

}
#include<stdio.h>

int main(void) {

	int num = 0;
	int numbers[10];
	int i = 0;
	do {

		for (int a = 0; a <= 10; a++) {
			printf("Enter number");
			scanf_s("%d", &num);
			getchar();
			numbers[i] = num;
			int calculation = num + num;

			if (num == -1 || num == 0) {
				printf("The total is %d", calculation);
				getchar();
				break;
			}


		
		}
	} while (num != -1 || num != 0);

}
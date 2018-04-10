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
			numbers[a] = num;
			int calculation = 0;
			calculation = calculation + num;

			if (num == -1 || num == 0) {
				printf("The total is %d", calculation);
				getchar();
				break;
			}

			if (i == 10) {
				break;
			}

			i++;

		
		}
	} while (num != -1 || num != 0);

}
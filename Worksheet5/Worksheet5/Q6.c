#include<stdio.h>

int main(void) {

	int weight, height;
	printf("Enter weight \n");
	scanf_s("%d", &weight);
	getchar();
	printf("Enter hieght \n");
	scanf_s("%d", &height);
	getchar();

	if (weight < 100 && height > 64) {
		if (height >= 72)
		{
			printf("You are very tall; for your weight. \n");
			getchar();
		}
		else if(height < 72 && height > 64){
			printf("You are tall for your weight. \n");
			getchar();
		}
	else if (weight > 300) {
			if (!(height >= 48)) {
				printf("You are quite short for your weight. \n");
				getchar();

			}
			else {
				printf("Your weight is ideal. \n");
				getchar();
			}
			return 0;
		}
	}
	getchar();
	getchar();
	getchar();
}
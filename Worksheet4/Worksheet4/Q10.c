#include<stdio.h>

int main(void) {

	float weight = 0;
	printf("Enter your weight \n");
	scanf_s("%f", &weight);

	float mercury = weight * 0.4;
	float venus = weight * 0.9;
	float jupiter = weight * 2.5;
	float saturn = weight * 1.1;

	printf("Your weight in Mercury is : %.2f \n", mercury);
	printf("Your weight in Venus is : %.2f \n", venus);
	printf("Your weight in Jupiter is : %.2f \n", jupiter);
	printf("Your wieght in Saturn is : %.2f \n", saturn);
	getchar(); getchar();

}
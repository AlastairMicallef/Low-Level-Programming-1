#include<stdio.h>
#include<Windows.h>

int main(void) {
	//Worksheet 2 - Variables and Data Types

	//1

	//a
	int population = 0;
	printf("WHat is the current population on earch \n");
	scanf("%d", &population);
	printf("The population of earht is %d \n", population);
	getchar(); 

	//b
	int age = 0;
	printf("How old is the earth \n");
	scanf("%d", &age);
	printf("The earth is %d old \n", age);
	getchar(); ;

	//c
	long int distance = 0;
	printf("The distance from the earth to the moon in metres \n");
	scanf("%ld", &distance);
	printf("the distance is %ld meters \n", distance);
	getchar(); 

	//d
	float salary = 750.50;
	printf("My salary is : %f \n", salary);
	getchar(); 

	//f
	float milkPrice = 1.5;
	printf("The price of milk is %f \n", milkPrice);
	getchar(); 

	//g
	char letter = "A";
	printf("%c \n",letter);
	getchar(); getchar();

	//h
	char word = "respect";
	printf("%c \n", word);
	getchar();

	//2
	//Constant: 12 type: int Spicifier : %d or %i
	//Constant: 0X3 type: hexadecimal number Spicifier:%x or %#x
	//Constant: 'c' type: char Spicifier: %c
	//Constant: 2.34E07 type: Decimal Spicifier: %e
	//Constant: 7.0 type: float Spicifier: %f
	//Constant: 6L type: string  Spicifier: %s
	//Constant: 6.0f type: float Spicifier: %f

	//3
	int number = 100;
	printf("%e \n", number);
	printf("%o \n", number);
	printf("%x \n" ,number);
	getchar();

	//4
	//int n = 2147483647;
	//printf(n);

	//5
	printf("Giulia says, ""Look, this is a backslahs \\""");
	getchar();

	//6
	int a;
	char b;
	double c;
	float d;

	printf("the size of a is %ld \n  ",sizeof(a));
	printf("the size of b is %ld \n ",sizeof(b));
	printf("the size of c is %ld \n ",sizeof(c));
	printf("the sieze of d is %ld \n ",sizeof(d));
	getchar();

	//7
	MessageBeep(MB_OK);
	printf("Startled by the sudden sound, sally shouted, ""By the great pumpkin, what was that?!""\n");
	getchar();

	//8
	int imate = 2;
	long shot = 53456;
	char grade = 'A';
	float log = 2.71828;

	printf("The odds against the %d were %ld to 1. \n", imate, shot);
	printf("A score %f is not %c grade", log, grade);
	getchar();

	//9
	int i;
	i = 0;
	do
	{
		printf("%d %c \n", i, i);
		i++;
	} while (i <= 255);
	
	getchar();

	//10
	int main(void) {

		int cows, legs;
		printf("How many cows legs did you count? \n");
		scanf("%d", legs);
		cows = legs / 4;
		printf("That implies there are %d cows. \n", cows);
		getchar();

	}

	


	return 0;
}
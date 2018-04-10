#include <stdio.h>

int main(void) {

	char arr[25] = "\0";
	char *parry = arr;
	int lenght = Mystrlen(parry);
	printf("Enter a word to see what is the size \n");
	scanf_s("%c", &arr);
	getchar();
	printf("Enter a word to found out the size \n");
	printf("The siz of word is %d", lenght);
	getchar();

}

int Mystrlen(char *pArray) {

	int arrayLenght = 0;
	while (pArray[arrayLenght] != '\0') {
		arrayLenght++;
	}

	return arrayLenght;


}
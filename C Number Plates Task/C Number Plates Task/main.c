#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*Write a program that creates an array of strings (no user input required), each of which represents a
Maltese number plate (some of them should be invalid). The program should loop through the array and 
print out Standard, Personalised or Invalid for each according to the following rules:
Standard: “AAA DDD” where A is a capital letter and D is a number
Personalised: Any other string that is between 1 and 9 characters long
Invalid: all the other options
 
Note: you are only allowed to use the following headers
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
*/

int main(void) {
	// R = ROWS
	// C = Colums
	//				   R  C
	char numberPlates[10][9] =
	{
	//Caloums  0   1   2   3   4   5   6   7
		/*Rows*/
		/*0*/{'D','B','F','5','7','5'},
		/*1*/{'A','D','R','1','2','3'},
		/*2*/{'A','L','A','S','T','I','A','R'},
		/*3*/{'1','a','4'},
	};

	int counter = 0;
	int standardcounter = 0;
	int personaliedcounter = 0;
	// loop around rows
	for (int i = 0; i < 10; i++) {
		// loop around colums
		for (int x = 0; x < 9; x++) {

			if (isdigit(numberPlates[i][x])) {
				counter++;
				standardcounter++;
				personaliedcounter++;
				printf(" %c", numberPlates[i][x]);
				
			}
			else if (isalpha(numberPlates[i][x])){
				counter++;
				standardcounter++;
				personaliedcounter++;
				printf("%c", numberPlates[i][x]);
			}
			else {
				print("Invalid charecter \n");
			}

			

		}
		printf("\n");
		getchar();
	}


}

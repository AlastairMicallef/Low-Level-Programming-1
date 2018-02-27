#include<stdio.h>
 
int main(void) {
	//1
	//a
	int * iPtr;
	//b
	char * cPtr;
	//c
	float * fPtr;
	//d
	int **ipp;

	//2
	//a
	int *ip = "NULL";
	//b
	int number = 12;
	//c
	ip =  &number;
	//d
	printf("\nQuestion 2\n");
	printf("the contents of the pionter is %p\n", ip);//address of number
	//e
	printf("The value of the variable pionted to by pionter is %d\n", *ip);
	//f
	printf("The address of the pionter is %x\ n", &ip);
	getchar();
	//g
	*ip = 5;
	printf("the value of the variable is now %d \n", number);
	getchar();


	//3
	/*. Write a program to do the following:  
	(a)  Declare two pointers to character, cPtr1 and cPtr2. 
	(b) Declare a character variable ch and store the value ‘A’; 
	(c) Set the pointer cPtr1 to point to ch. 
	(d) Set cPtr2 to store the contents of cPtr1. 
	(e)  Write code to show that the two pointers are now pointing to the same variable. 
	*/

	//a
	char *cPtr1, *cPtr2;
	//b
	char ch = 'A';
	//c
	cPtr1 = &ch;
	//d
	cPtr2 = cPtr1;
	cPtr2 = &ch;
	//Do queastion e

	/*
	4. Write a program to do the following: 
	(a) Set a pointer to point to a integer variable; 
	(b) Display the contents of the pointer.
	(c) Increment the pointer by 1.  What happens?  Why? 
	(d) Can you display the contents of the memory cell to which the pointer is now pointing? 
	(d) Can you change the contents of the memory cell to which the pointer is now pointing? 
	*/

	//a
	int num = 5;
	int *pl = &num;
	//b
	printf("%p", pl);
	//c
	pl++;
	pl= pl + sizeof(int);

	/*5. Write a program to do the following:  
	(a) Declare a pointer to integer numPtr. 
	(b) Set a value to the address pointed to by numPtr.  What happens?  Why?  
	(c) Can we store a memory address in the pointer variable directly?  
	(d) What happens if you try to change the contents of this memory address? Why? 
	*/

	printf("\nQuestion 5\n");
	int *numPtr;

	//*numPtr = 5; // runtime error using pointer without initialising it
	numPtr = (int*)0x1234;
	//*numPtr = 15' // access violation

	/*
	6. Write a program to do the following: 
	(a) Declare a pointer to integer ip. 
	(b) Allocate memory to the pointer by using malloc().  
	(c) Store a value in the memory pointed to by your pointer.  
	(d) Write code to display the contents of the pointer and of the memory cell to which it is pointing. 
	(e)  Free memory allocated to the pointer by using free(). 
	(d) Write code to display the contents of the pointer and of the cell to which it is pointing.
	*/

	//a
	int *ip;
	//b
	ip - malloc(100);
	//c
	*ip = 50;
	//d
	printf("%p %i", ip, *ip);
	//e
	free(ip);
	ip = NULL;
	printf("The address stored in pointer is %p\n" ,ip);
	printf("The va;ue of cell pointed to by pointer in now %d\n", *ip);
	 





}
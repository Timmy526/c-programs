//Program to see if a number
//is a multiple of 19 and 3
//Written by Timothy Tu
//Language: C

/*
1. Greet the user
2. Prompt the user for a integer
3. Scan the integer
4. Check if the number given is a multiple of 19 and 3
   (divide input by each multiple and get 0 as a remainder)
5. Display the number saying it is a multiple or not
5a. Display the number saying it is a multiple
5b. Display the number is not a multiple
6. Thank them for using the program
7. Terminate
*/

#include <stdio.h>

int main(){

	//Variables
	int guess = 0.0;

	//1. Greet the user
	printf("Find out if your number is a multiple of 19 and 3.\n");

	//2. Prompt user for a integer
	printf("Please enter an integer to find out.\n");

	//3. Scan the integer
	scanf("%d", &guess);

	/*4. Check if the number given is a multiple of 19 and 3
	(divide input by each multiple and get 0 as a remainder)*/

	if ((guess % 19 == 0) && (guess % 3 == 0)){

		//5. Display the number saying it is a multiple or not
		//5a. Display the number saying it is a multiple
		printf("The number %d is a multiple of 19 and 3.\n", guess);

	}

	else{
		//5b. Display the number is not a multiple
		printf("The number %d is a not a multiple of 19 and 3.\n", guess);

	}

	//6. Thank them for using the program
	printf("Thank you for using the program.\n");

	//7. Terminate
	return 0;
}

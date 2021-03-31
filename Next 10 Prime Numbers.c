//Program to take a number
//and find the next 10 prime
//numbers after the given number
//Written by Timothy Tu
//Language: C


/*
1. Greet the user
2. Prompt the user for a positive integer from 2 to 100,000
3. Record the input
4. Display the 10 prime numbers
4a. Check if it is a prime number
5. Thank them for using the program
6. Terminate
*/


#include <stdio.h>

int main(){
	//Declare Variables
	int num = 0.0;
	int count = 0.0;
	int i = 0.0;
   	int flag = 0.0;

    	//1. Greet the user
    	printf("This program finds 10 prime numbers after the given number.");

	//2. Prompt the user for a positive integer from 2 to 100,000
    	printf("Enter a positive integer from 2 to 100,000: ");

    	//3. Record the input
    	scanf("%d", &num);

    	//4. Display the 10 prime numbers
	count = 1;

    	while(count <= 10){

		//4a. Check if it is a prime number
        	flag = 1;

		for (i = 2; i <= num / 2; ++i){

			if (num % i == 0) {

				flag = 0;

				break;

			}

		}

		if (flag == 1){

			printf("%d\n", num);

           		num++;

            		count++;

        	}

       		else{

            		num++;

        	}

	}

    	//5. Thank them for using the program
   	printf("Thank you for using the program.\n");

    	//6. Terminate
	return 0;

}

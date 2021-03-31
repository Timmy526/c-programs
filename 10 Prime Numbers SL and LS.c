//Program to display prime numbers
//from 2 to 100,00 but display
//from smallest to largest
//and largest to smallest
//Written by Timothy Tu
//Language: C

/*
Algorithm:
1. Ask user to enter an intger befween 2 and 100,000
2. Record user's input
3. Test if the user's input is between 2 and 100,000 inclusive
   a. If true
      1. Copy user's input to test_prime_index (tpi)
      2. Communicate that the following numbers are the
         next 10 prime numbers
      3. Test if number of primes is less than or equal to 10
         a. If true, test each integer from 2 to one less than
            the test_prime_index looking for a an integer that
            produces no remainder when divided into the
            test_prime_index.
         b. If an integer is found that produces no remainder,
            set the prime_flag to 0 and immediately stop testing
         c. Test if the prime_flag is one
            1. If true,
               a. Display the integer
               b. Increment the number of primes
         d. Increment test_prime_index
         e. Reset the prime flag to 1
         f. Go to step 3.a.3
   b. If false, go to step 4
4. Terminate
*/


#include<stdio.h>

int main (void)
{
   //Local variables
   int input = 0 , i = 0, tpi = 0 , index = 0 , prime_flag = 1 ;
   int num_primes = 1 ;
   int primes[10] , newprimes[10];

   //1. Ask user to enter an intger befween 2 and 100,000
   printf("\nPlease enter an integer between 2 and 100,000: ") ;

   //2. Record user's input
   scanf( "%d" , &input ) ;

   //3. Test if the user's input is between 2 and 100,000 inclusive
   if(input >=2 && input <=100000  )
   {
      //a. If true
         //1. Copy user's input to test_prime_index (tpi)
         tpi = input ;

         //2. Communicate that the following numbers are the
         //   next 10 prime numbers
         printf("\nThe prime numbers from smallest to largest are: " ) ;

         //3. Test if number of primes is less than or equal to 10
         while ( num_primes <= 10 ){
            //a. If true, test each integer from 2 to one less than
            //   the test_prime_index looking for a an integer that
            //   produces no remainder when divided into the
            //   test_prime_index.
            //b. If an integer is found that produces no remainder,
            //   set the prime_flag to 0 and immediately stop testing
            for ( index = 2 ; index < tpi ; index++ ){
               if ( tpi % index == 0 ){
                  prime_flag = 0 ;
                  break ;
               }

            }

            //c. Test if the prime_flag is one
            //   1. If true,
            //      a. Display the integer
            //      b. Increment the number of primes
            if ( prime_flag == 1 ){
               //Stores integer into the prime array
               primes[i] = tpi;
               printf("%d ", primes[i]);
               num_primes++  ;
               i++;
	         }
	         //d. Increment test_prime_index
            //e. Reset the prime flag to 1
            //f. Go to step 3.a.3
            tpi++ ;
            prime_flag = 1 ;
        }

      	printf("\n" ) ;

        //Make prime numbers larger to smaller
        for (i = 0; i < 10; i++){

            newprimes[9-i] = primes[i];

        }

        //Print prime numbers from largest to smallest
        printf("The prime Numbers from largest to smallest are: ");
        for(i = 0; i < 10; i++){

            printf("%d ", newprimes[i]);

        }

        printf("\n");

   }
   //4. Terminate
   return 0 ;
}

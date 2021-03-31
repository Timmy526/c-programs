//Program to create and
//display a 2D array
//Written by Timothy Tu
//Language: C

/*
Algorithm:
   1. Populate data array with random integers
      between 1 and 9
   2. Display the contents of the data array in 2D
      table form
   3. Determine the total of each row and save
      each row's total to the total_rows array
   4. Display the total of each row by using the
      total_rows array
   5. Determine the total of each column and save
      each column's total to the total_cols array
   6. Display the total of each column in the
      total_rows array
   7. Terminate
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Prototypes
void function_1(int [][8], int, int);
void function_2(int [][8], int, int);
void function_3(int [][8], int, int, int []);
void function_4(int [][8], int, int, int []);

int main (void){
   //Local variables created
   int data[4][8] = {0} ;
   int total_rows[4] = {0} ;
   int total_cols[8] = {0} ;
   int col = 0, row = 0 ;

   //Function calls
   function_1(data, 4, 8);
   function_2(data, 4, 8);
   function_3(data, 4, 8, total_rows);
   function_4(data, 4, 8, total_cols);

   //7. Terminate
   return 0 ;

}

void function_1(int dataArray[][8], int rowNum, int colNum){
   //Variables
   int row = 0;
   int col = 0;

   //Seed the random function based upon server time at execution
   srandom ((unsigned)time(NULL));

   //1. Populate data array with random integers
   //between 1 and 9
   for  (row = 0; row < rowNum; row++){

      for (col = 0; col < colNum; col++){

         dataArray[row][col] = (random( ) % 9) + 1 ;

      }

   }

}

void function_2(int dataArray[][8], int rowNum, int colNum){
   //Variables
   int row = 0;
   int col = 0;

   //2. Display the contents of the data array in 2D
   //   table form
   for  (row = 0; row < rowNum; row++){

      printf("\n") ;

      for (col = 0; col < colNum; col++){

         printf("%d", dataArray[row][col]);

      }

   }

   printf("\n\n"); //Added for spacing of output

}

void function_3(int dataArray[][8], int rowNum, int colNum, int rowArray[]){
   //Variables
   int row = 0;
   int col = 0;

   //3. Determine the total of each row and save
   //   each row's total to the total_rows array
   for  (row = 0; row < rowNum; row = row + 1){

      for (col = 0; col < colNum; col = col + 1){

         rowArray[row] = rowArray[row] + dataArray[row][col];

      }

   }

   //4. Display the total of each row by using the
   //   total_rows array
   for  (row = 0; row < 4; row = row + 1){

      printf("\n row %d total: %d", row, rowArray[row] ) ;

   }

}

void function_4(int dataArray[][8], int rowNum, int colNum, int colArray[]){
   //Variables
   int row = 0;
   int col = 0;

   //5. Determine the total of each column and save
   //   each column's total to the total_cols array
   for  (col = 0; col < colNum; col = col + 1){

      for (row = 0; row < rowNum; row = row + 1){

         colArray[col] = colArray[col] + dataArray[row][col] ;

      }

   }
   printf("\n\n") ; //Added for spacing of output

   //6. Display the total of each column in the
   //   total_rows array
   for  (col = 0 ; col < colNum ; col = col + 1){

      printf("\n col %d total: %d" , col , colArray[col]) ;

   }

   printf("\n\n") ; //Added for spacing of output

}

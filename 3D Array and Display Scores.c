//Program to create a 3D
//array and display scores
//Written by Timothy Tu
//Language: C

/*
Algorithm:
   Note 1: a 3D array of 5 pages/slices, 4 rows, and
   3 columns is created in main( )... the pages/
   slices represent students (each page/slice is
   a student), the rows represent courses (each
   student takes 4 courses), and the columns
   represent exams (each course has 3 exams)

   Note 2: a 1D array of 5 elements is created in
   main( )... each element of this array represents
   the average test score of each of the 5 students

   Note 3: the only 5 memory objects allowed in
   main( ) are the 3D array, the 1D array, and 3
   individual integer variables

   Note 4: you may not use global variables

   1. In a programmer-created function (PCF) named
      populate( ), populate the 3D array with
      random test scores between 50 and 100...use
      the srandom( ), the random( ), and the % to
      accomplish this task

   2. In a programer-create function (PCF) named
      display( ), print the the screen the contents
      of the 3D array... your ouput should be 5
      different 2D tables of rows(exams) and columns
      (test scores)

   3. In a programmer-created function (PCF) named
      determine_avg( ), determine each student's
      average test score... remember, each of the
      five students has 12 test scores... record
      the average test score for each student into
      the 1D array

   4. In a programmer-created function (PCF) named
      display_avg( ), print to the screen each
      student's average test score

   5. Terminate
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Prototypes
void populate(int [5][4][3], int , int, int);
void display(int [5][4][3], int, int, int);
void determine_avg(int [5][4][3], int, int, int, float avg[5]);
void display_avg(int [5][4][3], int, int, int, float avg[5]);

int main (void){
   //Local variables created... no other local
   //variable are allowed in the main( )
   int data [ 5 ][ 4 ][ 3 ] = { 0 } ;
   float avg [ 5 ] = { 0.0 } ;
   int students = 5 , courses = 4 , exam = 3 ;

   //1. In a programmer-created function (PCF) named
   //   populate( ), populate the 3D array with
   //   random test scores between 50 and 100... use
   //   the srandom( ), the random( ), and the % to
   //   accomplish this task
   populate(data, 5, 4, 3);
   //2. In a programer-create function (PCF) named
   //   display( ), print to the screen the contents
   //   of the 3D array... your ouput should be 5
   //   different 2D tables of rows(exams) and columns
   //   (test scores)
   display(data, 5, 4, 3);
   //3. In a programmer-created function (PCF) named
   //   determine_avg( ), determine each student's
   //   average test score... remember, each of the
   //   five students has 12 test scores... record
   //   the average test score for each student into
   //   the 1D array
   determine_avg(data, 5, 4, 3, avg);
   //4. In a programmer-created function (PCF) named
   //   display_avg( ), print to the screen each
   //   student's average test score
   display_avg(data, 5, 4, 3, avg);

   //5. Terminate
   return 0 ;

}

//1. In a programmer-created function (PCF) named
//   populate( ), populate the 3D array with
//   random test scores between 50 and 100... use
//   the srandom( ), the random( ), and the % to
//   accomplish this task
void populate(int testScores[5][4][3], int student, int courses, int exam){
   //Variables
   int page = 0;
   int row = 0;
   int col = 0;

   //Seed the random function based upon server time at execution
   srandom ((unsigned)time(NULL));

   //1. Populate data array with random integers
   //between 50 and 100
   for (page = 0; page < student; page++){

      for  (row = 0; row < courses; row++){

         for (col = 0; col < exam; col++){

            testScores[page][row][col] = (random( ) % 99) + 50;

         }

      }

   }

}

//2. In a programer-create function (PCF) named
//   display( ), print to the screen the contents
//   of the 3D array... your ouput should be 5
//   different 2D tables of rows(exams) and columns
//   (test scores)
void display(int testScores[5][4][3], int student, int courses, int exam){
   //Variables
   int page = 0;
   int row = 0;
   int col = 0;

   //2. Display the contents of the data array in 3D
   //   table form
   for (page = 0; page < student; page++){

      for  (row = 0; row < courses; row++){

         printf("\n") ;

         for (col = 0; col < exam; col++){

            //Takes testScores and if it is larger
            //than 100 it makes it into 100
            if (testScores[page][row][col] <= 100){
            printf("%d ", testScores[page][row][col]);
            }
            else{
            testScores[page][row][col] = 100;
            printf("%d ", testScores[page][row][col]);
            }

         }

      }

      printf("\n\n"); //Added for spacing of output
   }

}

//3. In a programmer-created function (PCF) named
//   determine_avg( ), determine each student's
//   average test score... remember, each of the
//   five students has 12 test scores... record
//   the average test score for each student into
//   the 1D array
void determine_avg(int testScores[5][4][3], int student, int courses, int exam, float avgArray[5]){
   //Variables
   int page = 0;
   int row = 0;
   int col = 0;

   //Adds up each of the test scores for each student
   for (page = 0; page < student; page++){

      for  (row = 0; row < courses; row++){

         for (col = 0; col < exam; col++){

            avgArray[page] = avgArray[page] + testScores[page][row][col];

         }

      }

   }

   //Finds the average of each student's test scores
   for (page = 0; page < student; page++){

   avgArray[page] = (avgArray[page] / (col * row));

   }

}


//4. In a programmer-created function (PCF) named
//display_avg( ), print to the screen each
//student's average test score
void display_avg(int testScores [5][4][3], int student, int courses, int exam, float avgArray[5]){
   int page = 0;

   for  (page = 0 ; page < student ; page++){
      //Prints the student's average test score
      printf("\n Student %d Average: %f" , page + 1 , avgArray[page]) ;

   }

   printf("\n\n") ; //Added for spacing of output

}

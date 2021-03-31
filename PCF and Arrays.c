//Program using Programmer
//Created Functions and Arrays
//to Find Student Average Test Scores
//Written by Timothy Tu
//Language: C

/*
   1. Obtain first names for each of 10 students
	   Store in an array named fn_array
           Use a PCF named get_first( )
           Use data file /home/faculty/urbanc/ghp2567fn.day
	   Rows represent students.
   2. Obtain last names  for each of 10 students
	   Store in an array named ln_array
           Develop and use a PCF names get_last( )
           Use data file /home/faculty/urbanc/ghp2567LN.dat
	   Rows represent students.
   3. Obtain 5 test scores for each of 10 students
	   Store in an array named scores_array
           Develop and use a PCF named get_scores( )
	   Use data file /home/faculty/urbanc/ghp2567scores.dat
           Rows represent students; columns represent tests
   4. Determine the average test score for each student.
	   Store in and array names avgs_array
           Develop and use a PCF named computer_avgs ( )
   5. Print the first name, last name, and average test
      score for each of the 10 students
           Develop and use a PCF named display.
   6. Terminate
*/

#include <stdio.h>

//PCF Prototypes below
void get_first (char[ ] [15] , int ) ;


int  main ( void )
{
   //Local variables created below
   char fn_array [10][15] = {' '} ;
   char ln_array [10][15] = {' '} ;
   int scores_array [10][5] = {0} ;
   double avgs_array[10] = {0.0}  ;
   int rows = 10 , cols = 5 ;

   //1. Obtain first names for each of 10 students
   //	  Store in an array named fn_array
   //     Use a PCF named get_first( )
   //     Use data file /home/faculty/urbanc/ghp2567fn.day
   //	  Rows represent students.
   get_first( fn_array , rows ) ;

   //2. Obtain last names  for each of 10 students
   //     Store in an array named ln_array
   //     Develop and use a PCF names get_last( )
   //     Use data file /home/faculty/urbanc/ghp2567LN.dat
   //	  Rows represent students.

   //3. Obtain 5 test scores for each of 10 students
   //     Store in an array named scores_array
   //     Develop and use a PCF named get_scores( )
   //     Use data file /home/faculty/urbanc/ghp2567scores.dat
   //     Rows represent students; columns represent tests

   //4. Determine the average test score for each student.
   //     Store in and array names avgs_array
   //     Develop and use a PCF named computer_avgs ( )

   //5. Print the first name, last name, and average test
   //   score for each of the 10 students
   //     Develop and use a PCF named display.

   //6. Terminate
   return ( 0 ) ;

}

//PCF Definitions below

void get_first (char zzz[ ] [15] , int r )
{
   FILE * read_ptr = NULL ;
   int rows =0 ;

   read_ptr = fopen("/home/faculty/urbanc/ghp2567fn.dat" , "r");

   if (read_ptr == NULL)
   {
      printf("\n\nghp2567fn.dat not opened.\n\n") ;
   }
   else
   {
      printf("\n\nghp2567fn.dat opened properly.\n\n") ;
      for ( rows = 0 ; rows < r ; rows++)
      {
	     fscanf(read_ptr, "%s" , zzz[rows]) ;
      }
    }

    return ;

}



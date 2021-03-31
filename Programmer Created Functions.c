//Program using Programmer
//Created Functions to find
//Students current grade in
//class using inputted test scores
//Written by Timothy Tu
//Language: C

/*
   1. Obtain first names, last names, and 3 integer
      test scores for each of 12 students
	   Store in an array named records
           Use a PCF named get_records( )
           Use data file /home/faculty/urbanc/ghp289.dat
           The data file is composed as follows:
              column 0: first name
              column 1: last name
              column 2: test score #1
              column 3: test score #2
              column 4: test score #3
	   Each row represents a single student.
   2. Determine the test score average for each
      student
	   Store in an array named records
           Develop and use a PCF named compute_avgs( )
   3. Determine the letter grade for each student
           Store in an array named records
           Use this scale:
               >= 90 is an A
               >= 80 and less than 90 is a B
               >= 70 and less than 80 is a C
               >= 65 and less than 70 is a D
               < 65 is an F
           Develop and use a PCF named determine_grades( )
   4. Print the first name, last name, and average test
      score and the letter grader for each of the 10 students
           Develop and use a PCF named display( ).
   5. Terminate
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Structure definition below
typedef struct student {
   char first_name[15];
   char last_name[15];
   int test1;
   int test2;
   int test3;
   float average;
   char letter_grade;
}student ;

//PCF Prototypes below
void get_records(struct student records[], int );
void compute_avgs(struct student records[], int );
void determine_grades(struct student records[], int );
void display(struct student records[], int );

int  main (void){
   //Local variables created below
   student records[12];
   int rows = 12;

   //1. Obtain first names, last names, and 3 integer
   //   test scores for each of 12 students
   //	   Store in an array named records
   //        Use a PCF named get_records( )
   //        Use data file /home/faculty/urbanc/ghp289.dat
   //        The data file is composed as follows:
   //           column 0: first name
   //           column 1: last name
   //           column 2: test score #1
   //           column 3: test score #2
   //           column 4: test score #3
   //	   Each row represents a single student.
   get_records(records, rows);
   //2. Determine the test score average for each
   //   student
   //	   Store in an array named records
   //      Develop and use a PCF named compute_avgs( )
   compute_avgs(records, rows);
   //3. Determine the letter grade for each student
   //        Store in an array named records
   //        Use this scale:
   //            >= 90 is an A
   //            >= 80 and less than 90 is a B
   //            >= 70 and less than 80 is a C
   //            >= 65 and less than 70 is a D
   //            < 65 is an F
   //        Develop and use a PCF named determine_grades( )
   determine_grades(records, rows);
   //4. Print the first name, last name, and average test
   //   score and the letter grader for each of the 10 students
   //        Develop and use a PCF named display( ).
   display(records, rows);
   //5. Terminate
   return (0);
}

//PCF Definitions below

//1. Obtain first names, last names, and 3 integer
//   test scores for each of 12 students
//	   Store in an array named records
//        Use a PCF named get_records( )
//        Use data file /home/faculty/urbanc/ghp289.dat
//        The data file is composed as follows:
//           column 0: first name
//           column 1: last name
//           column 2: test score #1
//           column 3: test score #2
//           column 4: test score #3
//	   Each row represents a single student.
void get_records(struct student records[12], int r){

   int rows = 0;

   FILE *read_ptr ;

   read_ptr = fopen("/home/faculty/urbanc/ghp289.dat", "r");

   if (read_ptr == NULL){

      printf("\n\nghp289.dat was not properly opened.\n\n");

   }

   else{

      printf("\n\nghp289.dat was properly opened.\n\n");

      for(rows = 0; rows < r; rows++){

         fscanf(read_ptr,"%s", records[rows].first_name);

         fscanf(read_ptr,"%s", records[rows].last_name);

         fscanf(read_ptr,"%d", &records[rows].test1);

         fscanf(read_ptr,"%d", &records[rows].test2);

         fscanf(read_ptr,"%d", &records[rows].test3);

      }

   }

   return;

}

//2. Determine the test score average for each
//   student
//	   Store in an array named records
//      Develop and use a PCF named compute_avgs( )
void compute_avgs(struct student records[12], int r){

   int rows = 0;

   for(rows = 0; rows < r; rows++){

      records[rows].average = records[rows].test1 + records[rows].test2 + records[rows].test3;

      records[rows].average = records[rows].average / 3;

   }

   return;

}

//3. Determine the letter grade for each student
//        Store in an array named records
//        Use this scale:
//            >= 90 is an A
//            >= 80 and less than 90 is a B
//            >= 70 and less than 80 is a C
//            >= 65 and less than 70 is a D
//            < 65 is an F
//        Develop and use a PCF named determine_grades( )
void determine_grades(struct student records[12], int r){

   int rows = 0;

   for (rows = 0; rows < r; rows++){

      if (records[rows].average >= 90){

         records[rows].letter_grade = 'A';

      }

      else if (records[rows].average >= 80 && records[rows].average < 90){

         records[rows].letter_grade = 'B';

      }

      else if (records[rows].average >= 70 && records[rows].average < 80){

         records[rows].letter_grade = 'C';

      }

      else if (records[rows].average >= 65 && records[rows].average < 70){

         records[rows].letter_grade = 'D';

      }

      else if (records[rows].average < 65){

         records[rows].letter_grade = 'F';

      }

   }

}

//4. Print the first name, last name, and average test
//   score and the letter grader for each of the 10 students
//        Develop and use a PCF named display( ).
void display(struct student records[12], int r){

   int rows = 0;

   for(rows = 0; rows < r; rows++){

      printf("Student: %s %s has a %c\n", records[rows].first_name, records[rows].last_name, records[rows].letter_grade);

   }

}


//Program to tell if a
//multiple place number
//is a palindrome
//Written by Timothy Tu
//Language: C

/*
Algorithm:
    1. Ask the user to enter a multiple-place integer
    2. Record the user's input
    3. Place the integer into a second storage
       location (temp) to preserve the original
       value entered by the user
    4. Reverse the integer
       4a. Copy the last digit from temp
       4b. Place (add) the copied last digit into a different
           temporary location (temp2) after temp2 has been
           multiplied by 10 (this will shift the digits
           of temp2 one place to the left before adding
           the removed digit)
       4c. Remove the last digit from temp
       4d. Repeat steps 4a - 4c as long as temp is greater
           than 0
    5. Test to see if temp2 is equal to input
       5a. If true, communicate that the input is a palindrome
       5b. If not true, communicate that the input is not
           palindrome
    6. Terminate
*/

#include<stdio.h>

//Prototype Declaration
void function_1(int *temp, int *input);
void function_2(int *temp, int *removed, int *temp2);
void function_3(int *input, int *temp2);

int main(void){
    //Localized Variables
    int temp = 0, input = 0, temp2 = 0, removed = 0;

    //Steps 1,2,3 Function Call
    function_1(&temp, &input);

    //Step 4 Function Call
    function_2(&temp, &removed, &temp2);

    //Step 5 Function Call
    function_3(&input, &temp2);

    //6. Terminate
    return 0;
}

//Steps 1,2,3 function
void function_1(int *temp, int *input){

    //1. Ask the user to enter a multiple-place integer
    printf("\nPlease enter a multi-place integer:");

    //2. Record the user's input
    scanf("%d", &*input);

    //3. Place the integer into a second storage
    //   location (temp) to preserve the original
    //   value entered by the user.
    *temp = *input ;

}

//Step 4 function
void function_2(int *temp, int *removed, int *temp2){

    //4. Reverse the integer
    while (*temp > 0){
        //   4a. Copy the last digit from temp
        *removed = *temp % 10 ;
        //   4b. Place (add) the copied last digit into a different
        //       temporary location (temp2) after temp2 has been
        //       multiplied by 10 (this will shift the digits
        //       of temp2 one place to the left before adding
        //       the removed digit)
        *temp2 = (*temp2 * 10) + *removed ;
        //   4c. Remove the last digit from temp
        *temp = *temp / 10 ;
        //   4d. Repeat steps 4a - 4c as long as temp is greater
        //       than 0
    }
}

//Step 5 function
void function_3(int *input, int *temp2){

    //5. Test to see if temp2 is equal to input
    if(*temp2 == *input){
       //5a. If true, communicate that the input is a palindrome
       printf("\nYour input is a palindrome.\n ");
    }
    else{
       //5b. If not true, communicate that the input is not a
       //    palindrome
       printf("\nYour input is not a palindrome.\n");
    }

}

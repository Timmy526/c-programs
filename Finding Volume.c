//Program to take the height
//and radius to find the
//volume of a cone
//Written by Timothy Tu
//Language: C

/*
1. Greet User
2. Prompt user to enter height
3. Scan input
4. Prompt user to enter radius
5. Scan input
6. Calculate the volume (PI * height/3 * radius^2)
7. Display volume
8. Sign Off
9. Terminate program
*/

# include <stdio.h>
# define PI 3.14159
int main (void){
    //Variables
	double height = 0.0;
	double radius = 0.0;
	double  volume = 0.0;

	//Print and scan height
	printf ("\nThis program helps to calculate the volume of a cone. \n");
	printf ("\nPlease enter the height(in inches) of the cone. \n");
	scanf ("%le", &height);

	//Print and scan radius
	printf ("\nPlease enter the radius(in inches) of the cone. \n");
	scanf ("%le", &radius);

	//Calculate the volume
	volume = PI * (height / 3) * (radius * radius);

	//Display Volume
	printf("The height(in inches) of %f with\n", height);
	printf("the radius(in inches) of %f. \n", radius);
	printf("makes the volume of the cone, %f inches.\n", volume);

    //Sign off
	printf("\nThank you for using this program\n");

	return 0;
}

/*

This program will input user entered information to be solved using common
math and physics equations.

Jake Mercure

1/31/20


*/

#include <stdio.h>
#include <math.h>   // used to perform pow() and sqrt() fuctions


#define pi 3.1415  // pi constant
#define g 6.67 * pow(10, -11) // sets g to 6.67 * 10^-11


#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)  // used to ignore scanf warnings



int main(void)  //main
{
	// newtons law equation
	double mass = 0, accel = 0, force = 0;  // double variables used in equation
	printf("Enter the mass and accleration for use in newtons second law Newton's second law (mass * acceleration = force): ");
	scanf ("%lf%lf", &mass, &accel);  // prompts user for input
	force = mass * accel;  // perfroms calculation
	printf("Newton's second law (mass * acceleration = force): %lf = %lf * %lf", mass, accel, force); // prints calculated answer to console


	// cylindrical calculation 
	double radius = 0, height = 0, volume = 0;   // double variables 
	printf("\n\nEnter the radius and height (pi * radius^2 * height = volume) to use in the cylindrical equation: ");    
	scanf("%lf%lf", &radius, &height);  // prompts user for input
	volume = pi * radius * radius * height;  // performs calculation
	printf("Cylindrical volume equation (pi * radius^2 * height = volume): %lf = %lf * %lf^2 * %lf",pi, radius, height, volume);

	// character encoding and offset
	char plaintext_character = 'null', encoded_character = 'null';  // char data types
	int offset = 0;
	printf("\n\nEnter a character then enter an integer: ");
	scanf(" %c %d", &plaintext_character, &offset);   // prompts user for input, char then integer
	encoded_character = offset + (plaintext_character - 'a') + 'A';  // calculation for offsetting the entered character
	printf("ASCII Encoded character offset by %d values: %c", offset, encoded_character);  // prints to the console


	// gravitational force calculation
	double mass1 = 0, mass2 = 0, distance = 0;  //double variables used in calculation
	printf("\n\nEnter the values of mass 1, mass 2 and distance for use in force equation (gravity * mass 1 * mass 2 * distance = force): ");
	scanf("%lf%lf%lf", &mass1, &mass2, &distance); // prompts user for input
	force = g * mass1 * mass2 * distance; // performs calculation
	printf("Force equation (gravity * mass 1 * mass 2 * distance = force): %lf = %lf * %lf * %lf = %lf", g, mass1, mass2, distance, force);


	// resistive devider calculation
	double r1 = 0, r2 = 0, vin = 0, vout = 0;  //double variables used in calculation
	printf("\n\nEnter R1, R2 and vin for Resistive divider equation (r2 / (r1 + r2) * vin = vout): ");
	scanf("%lf%lf%lf", &r1, &r2, &vin);
	vout = r2 / (r1 + r2) * vin;
	printf("Resistive divider equation (%lf / (%lf + %lf) * %lf = %lf)", r2, r1, r2, vin, vout);


	// distance between two coordinate points
	double x1 = 0, y1 = 0, x2 = 0, y2 = 0, line = 0;  //double variables used in calculation
	printf("\n\nEnter two coordinate points(x y x y): ");
	scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
	line = ((sqrt(x1 - x2)) - (sqrt(y1 - y2))); 
	printf("Distance between points (%lf, %lf) and (%lf, %lf): %lf", x1, x2, y1, y2, line);
	

	//general equation
	int a = 0;   // variable declarations
	double z = 0, x = 0, y = 0;
	printf("\n\nEnter an integer: "); // prompts user for integer variable
	scanf("%d", &a);
	printf("Enter two floating point values: ", z, x); // prompts user for double variable
	scanf("%lf%lf", &z, &x);
	y = (double)(89 / 27) - z * x + a / (a % 2); // performs calculation
	printf("Equation: (89/27) - %lf * %lf +  %d / (%d % 2) = %lf", z, x, a, a, y);

	








	return 0;

}
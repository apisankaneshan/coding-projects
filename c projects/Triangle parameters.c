#include <stdio.h>  /*include standard input output*/
#include <math.h>   /*include math library for squareroot function*/

int
main (void)
{
	double a; /*declare variables as doubles so all side lengths are accepted*/
	double b;
	double c;
	
	printf("Please enter the length of the first short side of the triangle: \n"); 
	scanf("%lf", &a); /*ask user for first short side length and assign it to variable a*/
	
	printf("Please enter the length of the second short side of the triangle: \n");
	scanf("%lf", &b); /*ask user for second short side length and assign it to variable b*/
	
	c = sqrt((a*a)+(b*b)); /*find the hypotenuse of the triangle and assign it to variable c*/
	
	double perimeter = a + b + c;  /*calculate perimeter by adding all side lengths*/
	double area = (a*b)/2;  /*calculate area using the formula for area of a triangle*/
	
	printf("The perimeter of the triangle is %.2lf. \n", perimeter); /*Display the perimeter to the user to 2 decimal places*/
	
	printf("The area of the triangle is %.2lf. \n", area); /*Display the area to the user to 2 decimal places*/
	
	return(0);
}

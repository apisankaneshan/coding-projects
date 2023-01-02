#include <stdio.h> /*include standard input output library and math library*/
#include <math.h>

int
main (void)
{
	double height, weight, bmi; /*introduce needed variables*/
	
	printf("Please enter your height in meters: "); /*ask user for their height*/
	scanf("%lf", &height); /*return the input into the height variable*/
	printf("\nPlease enter your weight in kilograms: "); /*ask user for their weight*/
	scanf("%lf", &weight);
	
	bmi = (weight)/(height*height); /*calculate the user's BMI*/
	
	if(bmi < 18.5) /*if the user's BMI is under 18.5 tell them they are underweight*/
		printf("\nYour BMI value is %.1lf, which classifies you as underweight", bmi);
		
	else
		if(bmi >= 18.5 && bmi <= 24.9) /*if the user's BMI is between 18.5 and 24.9 tell them they are normal*/
			printf("\nYour BMI value is %.1lf, which classifies you as normal", bmi);
		
		else
			if(bmi >= 25 && bmi <= 29.9) /*if the user's BMI is between 25 and 29.9 tell them they are overweight*/
				printf("\nYour BMI value is %.1lf, which classifies you as overweight", bmi);
				
			else
				if(bmi >= 30) /*if the user's BMI is 30 or higher tell them they are obese*/
					printf("\nYour BMI value is %.1lf, which classifies you as obese", bmi);
		
		


	return(0);
}

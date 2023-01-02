#include <stdio.h> /*include standard input output library and math library*/
#include <math.h>

int 
main (void)
{
	double mhr, rhr, thr, age, inten; /*introduce needed variables*/
	char gender, flvl;
	
	printf("Please enter your gender (male 'M' or female 'F'): "); /*ask user for gender*/
	scanf("%c", &gender); /*connect input to declared variable*/
	
	if (gender == 'M' || gender == 'm'){ /*if the user is a male then thier thr is different than female*/
		printf("\nPlease enter your age: "); /*ask user for age*/
		scanf("%lf", &age);
		printf("\nPlease enter your resting heart rate: "); /*ask user for rhr*/
		scanf("%lf", &rhr);
		printf("\nPlease enter your fitness level (low 'L' , medium 'M', or high 'H'): "); /*ask user for flvl*/
		scanf(" %c", &flvl);
		
		if (flvl == 'L'||flvl == 'l') /*define intesity value based on flvl input*/
			inten = 0.55; 
		
		if (flvl == 'M'||flvl =='m')
			inten = 0.65;
		
		else
			inten = 0.8;
				
		mhr = ((203.7)/(1+(exp(0.033*(age-104.3))))); /*calculate mhr*/
		thr = (mhr - rhr)* inten + rhr; /*calculate thr*/
		
		printf("\nYour training heart rate is: %.0lf", thr); /*tell user their thr*/
		
	}		
	else{ /*if user is female thier thr is different than male*/
		printf("\nPlease enter your age: ");
		scanf("%lf", &age);
		printf("\nPlease enter your resting heart rate: "); /*ask user for rhr*/
		scanf("%lf", &rhr);
		printf("\nPlease enter your fitness level (low 'L' , medium 'M', or high 'H'): "); /*ask user for flvl*/
		scanf(" %c", &flvl);
		
		if (flvl == 'L'||flvl == 'l') /*define intesity value based on flvl input*/
			inten = 0.55;
			 
		if (flvl == 'M'|| flvl =='m')
			inten = 0.65;
		
		else
			inten = 0.8;
		
	
		mhr = ((190.2)/(1+(exp(0.0453*(age-107.5))))); /*calculate mhr*/
		thr = (mhr - rhr)* inten + rhr; /*calculate thr*/
		
		printf("\nYour training heart rate is: %.0lf", thr); /*tell user their thr*/
	}
	
	return(0);
}

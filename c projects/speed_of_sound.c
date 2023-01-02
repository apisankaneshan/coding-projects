#include <stdio.h> /*include standard input output*/
#include <math.h> /*include math library*/

double spsound (double temp) /*name my function and assign the variable it will take*/
{
	double speed_of_sound; /*assign the varible for speed of sound equation*/
	
	temp = (temp * 9/5) + 32; /*convert input temperature from celsius to fahrenheit*/
	speed_of_sound = 1086*(sqrt(((5*temp)+297)/247)); /*input the temperature into the speed of sound equation*/
	
	return (speed_of_sound*1.097); /*return the speed of sound in km/h*/
}

int
main(void)
{
	double t, a; /*assign variables for input temperature and output speed of sound*/
	printf("Enter the temperature of the air through which sound is moving in celsius: "); /*ask user for temperture in celsius*/
	scanf("%lf", &t); /*store user input to temperture variable*/
	a = spsound(t); /*use funtion made at beginning to find speed of sound and store it in variable a*/
	printf("The speed of sound through this temperature is %.2lf km/h\n", a); /*display the speed of sound to user*/
	return(0);
}

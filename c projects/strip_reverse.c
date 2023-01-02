#include <stdio.h>
#include <string.h>
#include <ctype.h> /*include all needed libaraies to work with strings*/

void
strip (char original[], char stripped[]) /*strip function*/
{
    int i, j, k=0; /*make three counter variables*/
    j = strlen(original); /*one counter will be the length of the input string*/
    for(i=0;i<j;++i) /*array for loop*/
    {
        if (isalpha(original[i]) != 0) /*check if the cell in the array is part of the alphabet*/
        {
            stripped[k]=tolower(original[i]); /*put the cell in the stripped string*/
            ++k;
        }
    }
}

void 
reverse(char original[], char reversed[]) /*reverse function*/
{
    if(original[1]=='\0') /*end of recursion when the first cell is end of string*/
    {
        sprintf(reversed, "%c", original[0]); /*sprintf stores the letter in the string instead of printing it*/
    }
    else
    { 
        reverse(&original[1], reversed); /*call the function again for recursion but shrink original string by one cell*/
        sprintf(reversed, "%s%c", reversed, original[0]); /*store the letter in the string*/
        
    }
}


int
main(void)
{
    char input[100];
    char strips[100];
    char reverser[100];
    
    printf("Please enter a sentance: ");
    fgets(input, 100, stdin); /*Get user inputted string*/
    printf("You entered: %s\n", input); /*print the inputted string*/
    
    strip(input, strips);/*put the string through the strip function and print it*/
    printf("The stripped version of the sentance is: %s\n", strips);
    
    reverse(strips, reverser);/*put the stripped string through the reverse funtion and print it*/
    printf("The reversed version of the stripped sentance is: %s\n", reverser);
    
    if(strcmp(strips, reverser) == 0) /*check if the input is a palindrome*/
    {
		printf("The sentance you typed is a palindrome.");
	}
	else
	{
		printf("The sentance you typed is not a palindrome.");
	}
    
    return(0);
}

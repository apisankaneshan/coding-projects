#include<stdio.h>

int
order(int n1, int n2, int n3, int *highest, int *middle, int *lowest) /*creating function to put numbers in order*/
{
      if (n1 > n2 && n1 > n3 && n2 > n3) /*order if 1st number is biggest 2nd is middle and 3rd is lowest*/
      {
          *highest = n1; /*put the 1st number in the address of the highest variable*/
          *middle = n2; /*put the 2nd number in the address of the middle variable*/
          *lowest = n3; /*put the 3rd number in the address of the lowest variable*/
      }
      else 
      {
           if (n1 > n2 && n1 > n3 && n2 < n3) /*order if 1st number is biggest 3rd is middle and 2nd is lowest*/
           {
                *highest = n1;
                *middle = n3;
                *lowest = n2;
           }
           else
           {
                if (n1 < n2 && n1 > n3 && n2 > n3) /*order if 2nd number is biggest 1st is middle and 3rd is lowest*/
                {
                      *highest = n2;
                      *middle = n1;
                      *lowest = n3;
                }
                else
                {
                    if (n1 < n2 && n1 < n3 && n2 > n3)
                    {
                        *highest = n2;
                        *middle = n3;
                        *lowest = n1;
                    }
                    else
                    {
                        if (n1 > n2 && n1 < n3 && n2 < n3)
                        {
                            *highest = n3;
                            *middle = n1;
                            *lowest = n2;
                        }
                        else
                        {
                            if (n1 < n2 && n1 < n3 && n2 < n3)
                            {
                                *highest = n3;
                                *middle = n2;
                                *lowest = n1;
                            }
                            else
                            {
                                if (n1 == n2 && n1 < n3 && n2 < n3) /*when two numbers are equal*/
                                {
                                    *highest = n3;
                                    *middle = n2;
                                    *lowest = n1;
                                }
                                else
                                {
                                    if (n1 < n2 && n1 == n3 && n2 > n3)
                                    {
                                        *highest = n2;
                                        *middle = n3;
                                        *lowest = n1;
                                    }
                                    else
                                    {
                                        if (n1 > n2 && n1 > n3 && n2 == n3)
                                        {
                                            *highest = n1;
                                            *middle = n3;
                                            *lowest = n2;
                                        }
                                        else
                                        {
                                            if (n1 == n2 && n1 == n3 && n2 == n3) /*if all numbers are equal*/
                                            {
                                                 *highest = n1;
                                                 *middle = n3;
                                                 *lowest = n2;
                                            }
                                            else
                                            {
                                                if (n1 == n2 && n1 > n3 && n2 > n3)
                                                {
                                                    *highest = n1;
                                                    *middle = n2;
                                                    *lowest = n3;
                                                }
                                                else
                                                {
                                                    if (n1 > n2 && n1 == n3 && n2 < n3)
                                                    {
                                                        *highest = n1;
                                                        *middle = n3;
                                                        *lowest = n2;
                                                    }
                                                    else
                                                    {
                                                        if (n1 < n2 && n1 < n3 && n2 == n3)
                                                        {
                                                            *highest = n2;
                                                            *middle = n3;
                                                            *lowest = n1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
           }
      }
      return(0);
}

int
main (void)
{
    int n1, n2, n3, highest, middle, lowest; /*create the variables for user input and order function*/
    printf("Please enter an integer: "); /*ask user for input of 3 integers*/
    scanf("%d", &n1);
    printf("Please enter another integer: ");
    scanf("%d", &n2);
    printf("Please enter another integer: ");
    scanf("%d", &n3);
    order(n1, n2, n3, &highest, &middle, &lowest); /*take the entered integers and put them through the order function*/
    printf("The highest is %d, middle is %d and lowest is %d.", highest, middle, lowest); /*show user the numbers in ascending order*/
    return(0);
}

#include <stdio.h>

double
moont(double tvs, double *t1, double *t2) /*function for time to travel to moon*/
{
    double emop=363104, emoa=405696; /*shortest and longest distance to moon*/
    *t1=emop/tvs; /*find the time with shortest distance and place the value in the t1 address*/
    *t2=emoa/tvs; /*find the time with longest distance and place the value in the t2 address*/
    return(0);
}

double
marst(double tvs, double *t3, double *t4) /*function for time to travel to mars*/
{
    double emap=54600000, emaa=401000000;
    *t3=emap/tvs;
    *t4=emaa/tvs;
    return(0);
}

double
venust(double tvs, double *t5, double *t6) /*function for time to travel to venus*/
{
    double evp=38000000, eva=261000000;
    *t5=evp/tvs;
    *t6=eva/tvs;
    return(0);
}

int
main(void)
{
    int input; /*variable for user input*/
    double tvs, t1, t2, t3, t4, t5, t6; /*variables for travelling speed and time to travel*/
    
    printf("Please enter where you would like to travel (moon=1, mars=2, venus=3, finish=4): ");
    scanf("%d", &input); /*asking user where they want to go*/
    while(input!=4) /*loop until user enters finish(4)*/
    {
        if(input==1) /*if user wants to go to the moon*/
        {
            printf("Please enter the speed at which you will be traveling at in km/h: ");
            scanf("%lf", &tvs); /*ask user for the speed they will travel at*/
            moont(tvs, &t1, &t2); /*apply the moon function for the travelling speed*/
            printf("\nThe shortest distance will take you %.2lf hours and the longest distance will take you %.2lf hours.\n", t1, t2); /*tell the user how long it will take to get there*/
        }
        else /*same applies to other planets but calls the other functions*/
        {
            if(input==2)
            {
                printf("Please enter the speed at which you will be traveling at in km/h: ");
                scanf("%lf", &tvs);
                marst(tvs, &t3, &t4);
                printf("\nThe shortest distance will take you %.2lf hours and the longest distance will take you %.2lf hours.\n", t3, t4);
            }
            else
            {
                if(input==3)
                {
                    printf("Please enter the speed at which you will be traveling at in km/h: ");
                    scanf("%lf", &tvs);
                    venust(tvs, &t5, &t6);
                    printf("\nThe shortest distance will take you %.2lf hours and the longest distance will take you %.2lf hours.\n", t5, t6);
                }
            }
        }
        printf("\nPlease enter where you would like to travel (moon=1, mars=2, venus=3, finish=4): "); /*to continue loop*/
        scanf("%d", &input);
    }
    
    return(0);
}

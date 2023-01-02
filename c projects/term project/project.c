#include <stdio.h>

#include <math.h>

#include <stdlib.h>

 

void

calander(int day, int* month, int* date)

{

   

    if (day>0 && day<=31)

    {

        *month = 1;

    }

    if (*month == 1)

    {

        *date = day;

    }

   

    if (day>31 && day<=60)

    {

        *month = 2;

    }

    if (*month == 2)

    {

        *date = (day-31);

    }

   

    if (day>60 && day<=91)

    {

        *month = 3;

    }

    if (*month == 3)

    {

        *date = (day-60);

    }

   

    if (day>91 && day<=121)

    {

        *month = 4;

    }

    if (*month == 4)

    {

        *date = (day-91);

    }

   

    if (day>121 && day<=152)

    {

        *month = 5;

    }

    if (*month == 5)

    {

        *date = (day-121);

    }

   

    if (day>152 && day<=182)

    {

        *month = 6;

    }

    if (*month == 6)

    {

        *date = (day-152);

    }

   

    if (day>182 && day<=213)

    {

        *month = 7;

    }

    if (*month == 7)

    {

        *date = (day-182);

    }

   

    if (day>213 && day<=244)

    {

        *month = 8;

    }

    if (*month == 8)

    {

        *date = (day-213);

    }

   

    if (day>244 && day<=274)

    {

        *month = 9;

    }

    if (*month == 9)

    {

        *date = (day-244);

    }

   

    if (day>274 && day<=305)

    {

        *month = 10;

    }

    if (*month == 10)

    {

        *date = (day-274);

    }

   

    if (day>305 && day<=335)

    {

        *month = 11;

    }

    if (*month == 11)

    {

        *date = (day-305);

    }

   

    if (day>335 && day<=366)

    {

        *month = 12;

    }

    if (*month == 12)

    {

        *date = (day-335);

    }

   

}

 

 

int

main (void)

{

    int i, j, k;

    double year, day, t_superior, t_michigan, t_huron, t_erie, t_ontario, t_stclair;

    double t_array[366][8], avgt_array[6];

    double sum_superior = 0, sum_michigan = 0, sum_huron = 0, sum_erie = 0, sum_ontario = 0, sum_stclair = 0;

   double avg_superior, avg_michigan, avg_huron, avg_erie, avg_ontario, avg_stclair, avg_tot;

 

    FILE *file = fopen ("datatemps.txt.txt", "r");

 

    /* if file not found */

 

    if (file == 0)

    {

        printf ("ERROR: <File not found>\n");

        return (0);

    }

 

    /* scan file loooop */

 

    while (!feof(file))

 

    {

        for (i=0; i<366; i++)

        {

            for (j=0; j<8; j++)

            {

                fscanf (file, "%lf", &t_array[i][j]);

            }

        }

    }

 

 

 

    /*-----------------------------Q1----------------------------------------*/

 

 

 

    for (i=0;i<366;++i)

    {

        t_superior = t_array[i][2];

        sum_superior = sum_superior + t_superior;

 

        t_michigan = t_array[i][3];

        sum_michigan = sum_michigan + t_michigan;

 

        t_huron = t_array[i][4];

        sum_huron = sum_huron + t_huron;

 

        t_erie = t_array[i][5];

        sum_erie = sum_erie + t_erie;

 

        t_ontario = t_array[i][6];

        sum_ontario = sum_ontario + t_ontario;

 

        t_stclair = t_array[i][7];

        sum_stclair = sum_stclair + t_stclair;

    }

 

    avg_superior = sum_superior/366;

 

    avg_michigan = sum_michigan/366;

 

    avg_huron = sum_huron/366;

 

    avg_erie = sum_erie/366;

 

    avg_ontario = sum_ontario/366;

 

    avg_stclair = sum_stclair/366;

 

    avg_tot = (avg_superior+avg_michigan+avg_huron+avg_erie+avg_ontario+avg_stclair)/6;

 

 

    printf("The average temperature of Lake Superior is %.2lf °C\n", (avg_superior));

 

    printf("The average temperature of Lake Michigan is %.2lf °C\n", (avg_michigan));

 

    printf("The average temperature of Lake Huron is %.2lf °C\n", (avg_huron));

 

    printf("The average temperature of Lake Erie is %.2lf °C\n", (avg_erie));

 

    printf("The average temperature of Lake Ontario is %.2lf °C\n", (avg_ontario));

 

    printf("The average temperature of Lake St. Clair is %.2lf °C\n\n", (avg_stclair));

 

 

    printf("The average temperature of all six lakes is %.2lf °C\n\n", avg_tot);

 

  

 

    /*-----------------------------Q2----------------------------------------*/

 

 

 

    if(avg_superior<avg_michigan && avg_superior<avg_huron && avg_superior<avg_erie && avg_superior<avg_ontario && avg_superior<avg_stclair)

    {

        printf("Lake Superior is the coldest on average at %.2lf °C\n", avg_superior);

    }

 

    if(avg_superior>avg_michigan && avg_superior>avg_huron && avg_superior>avg_erie && avg_superior>avg_ontario && avg_superior>avg_stclair)

    {

        printf("Lake Superior is the warmest on average at %.2lf °C\n", avg_superior);

    }

 

    if(avg_michigan<avg_superior && avg_michigan<avg_huron && avg_michigan<avg_erie && avg_michigan<avg_ontario && avg_michigan<avg_stclair)

    {

        printf("Lake Michigan is the coldest on average at %.2lf °C\n", avg_michigan);

    }

 

    if(avg_michigan>avg_superior && avg_michigan>avg_huron && avg_michigan>avg_erie && avg_michigan>avg_ontario && avg_michigan>avg_stclair)

    {

        printf("Lake Michigan is the warmest on average at %.2lf °C\n", avg_michigan);

    }

 

    if(avg_huron<avg_superior && avg_huron<avg_michigan && avg_huron<avg_erie && avg_huron<avg_ontario && avg_huron<avg_stclair)

    {

        printf("Lake Huron is the coldest on average at %.2lf °C\n", avg_huron);

    }

 

    if(avg_huron>avg_superior && avg_huron>avg_michigan && avg_huron>avg_erie && avg_huron>avg_ontario && avg_huron>avg_stclair)

    {

        printf("Lake Huron is the warmest on average at %.2lf °C\n", avg_huron);

    }

 

    if(avg_erie<avg_superior && avg_erie<avg_michigan && avg_erie<avg_huron && avg_erie<avg_ontario && avg_erie<avg_stclair)

    {

        printf("Lake Erie is the coldest on average at %.2lf °C\n", avg_erie);

    }

 

    if(avg_erie>avg_superior && avg_erie>avg_michigan && avg_erie>avg_huron && avg_erie>avg_ontario && avg_erie>avg_stclair)

    {

        printf("Lake Erie is the warmest on average at %.2lf °C\n", avg_erie);

    }

 

    if(avg_ontario<avg_superior && avg_ontario<avg_michigan && avg_ontario<avg_huron && avg_ontario<avg_erie && avg_ontario<avg_stclair)

    {

       printf("Lake Ontario is the coldest on average at %.2lf °C\n", avg_ontario);

    }

 

    if(avg_ontario>avg_superior && avg_ontario>avg_michigan && avg_ontario>avg_huron && avg_ontario>avg_erie && avg_ontario>avg_stclair)

    {

        printf("Lake Ontario is the warmest on average at %.2lf °C\n", avg_ontario);

    }

 

    if(avg_stclair<avg_superior && avg_stclair<avg_michigan && avg_stclair<avg_huron && avg_stclair<avg_erie && avg_stclair<avg_ontario)

    {

        printf("Lake St. Clair is the coldest on average at %.2lf °C\n", avg_stclair);

    }

 

    if(avg_stclair>avg_superior && avg_stclair>avg_michigan && avg_stclair>avg_huron && avg_stclair>avg_erie && avg_stclair>avg_ontario)

    {

        printf("Lake St. Clair is the warmest on average at %.2lf °C\n", avg_ontario);

    }

 

 

 

    if(avg_superior>avg_tot)

        printf("\nLake Superior is above the total average temperature by %.2lf °C\n",(fabs(avg_superior-avg_tot)));

    else

        printf("\nLake Superior is below the total average temperature by %.2lf °C\n",(fabs(avg_superior-avg_tot)));

   

 

    if(avg_michigan>avg_tot)

        printf("Lake Michigan is above the total average temperature by %.2lf °C\n",(fabs(avg_michigan-avg_tot)));

    else

        printf("Lake Michigan is below the total average temperature by %.2lf °C\n",(fabs(avg_michigan-avg_tot)));

 

 

    if(avg_huron>avg_tot)

        printf("Lake Huron is above the total average temperature by %.2lf °C\n",(fabs(avg_huron-avg_tot)));

    else

        printf("Lake Huron is below the total average temperature by %.2lf °C\n",(fabs(avg_huron-avg_tot)));

 

 

    if(avg_erie>avg_tot)

        printf("Lake Erie is above the total average temperature by %.2lf °C\n",(fabs(avg_erie-avg_tot)));

    else

        printf("Lake Erie is below the total average temperature by %.2lf °C\n",(fabs(avg_erie-avg_tot)));

 

 

   if(avg_ontario>avg_tot)

        printf("Lake Ontario is above the total average temperature by %.2lf °C\n",(fabs(avg_ontario-avg_tot)));

        else

        printf("Lake Ontario is below the total average temperature by %.2lf °C\n",(fabs(avg_ontario-avg_tot)));

 

 

    if(avg_stclair>avg_tot)

        printf("Lake St. Clair is above the total average temperature by %.2lf °C\n\n",(fabs(avg_stclair-avg_tot)));

        else

        printf("Lake St.Clair is below the total average temperature by %.2lf °C\n\n",(fabs(avg_stclair-avg_tot)));

 

/*-----------------------------Q3----------------------------------------*/

   

    double high_superior = -99, high_michigan = -99, high_huron = -99, high_erie = -99, high_ontario = -99, high_stclair = -99;

    int month, date;

     

    for(i=0; i<366; ++i)

    {

      if (t_array[i][2]>high_superior)

      {

            high_superior = t_array[i][2];

            k=i;

      }

    }

   

    calander(k, &month, &date);

    printf("\n\nThe warmest water temperature for Lake Superior is: %.2lf °C\nThe date is: %d/%d\n\n", high_superior, date, month);

   

    for(i=0; i<366; ++i)

    {

      if (t_array[i][3]>high_michigan)

      {

            high_michigan = t_array[i][3];

            k=i;

      }

    }

    calander(k, &month, &date);

    printf("The warmest water temperature for Lake Michigan is: %.2lf °C\nThe day is: %d/%d\n\n", high_michigan, date, month);

   

    for(i=0; i<366; ++i)

    {

      if (t_array[i][4]>high_huron)

      {

            high_huron = t_array[i][4];

            k=i;

      }

    }

    calander(k, &month, &date);

    printf("The warmest water temperature for Lake Huron is: %.2lf °C\nThe day is: %d/%d\n\n", high_huron, date, month);

   

    for(i=0; i<366; ++i)

    {

      if (t_array[i][5]>high_erie)

      {

            high_erie = t_array[i][5];

            k=i;

      }

    }

    calander(k, &month, &date);

    printf("The warmest water temperature for Lake Erie is: %.2lf °C\nThe day is: %d/%d\n\n", high_erie, date, month);

   

    for(i=0; i<366; ++i)

    {

      if (t_array[i][6]>high_ontario)

      {

            high_ontario = t_array[i][6];

            k=i;

      }

    }

    calander(k, &month, &date);

    printf("The warmest water temperature for Lake Ontario is: %.2lf °C\nThe day is: %d/%d\n\n", high_ontario, date, month);

   

    for(i=0; i<366; ++i)

    {

      if (t_array[i][7]>high_stclair)

      {

            high_stclair = t_array[i][7];

            k=i;

      }

    }

    calander(k, &month, &date);

    printf("The warmest water temperature for Lake St. Clair is: %.2lf °C\nThe day is: %d/%d\n\n", high_stclair, date, month);

   

    

    

    

    double low_superior = 99, low_michigan = 99, low_huron = 99, low_erie = 99, low_ontario = 99, low_stclair = 99;

    for(i=0; i<366; ++i)
    {
      if (t_array[i][2]<low_superior)
      {
            low_superior = t_array[i][2];

            k=i;
      }
    }

    printf ("The coldest water temperature for Lake Superior is: %.2lf °C\nThe dates are:\n", low_superior);
    for(i=0; i<366; ++i)
    {
      if (t_array[i][2]==low_superior)
      {
            k=i;
            calander(k, &month, &date);
            printf("%d/%d\n", date, month);
      }
    }

    for(i=0; i<366; ++i)
    {
      if (t_array[i][3]<low_michigan)
      {
            low_michigan = t_array[i][3];

            k=i;
      }
    }
    
    printf ("\nThe coldest water temperature for Lake Michigan is: %.2lf °C\nThe dates are:\n", low_michigan);
    for(i=0; i<366; ++i)
    {
      if (t_array[i][3]==low_michigan)
      {
            k=i;
            calander(k, &month, &date);
            printf("%d/%d\n", date, month);
      }
    }

   

    for(i=0; i<366; ++i)
    {
      if (t_array[i][4]<low_huron)
      {
            low_huron = t_array[i][4];
            k=i;
      }
    }

    printf ("\nThe coldest water temperature for Lake Huron is: %.2lf °C\nThe dates are:\n", low_huron);
    for(i=0; i<366; ++i)
    {
      if (t_array[i][4]==low_huron)
      {
            k=i;
            calander(k, &month, &date);
            printf("%d/%d\n", date, month);
      }
    }
   

    for(i=0; i<366; ++i)
    {
      if (t_array[i][5]<low_erie)
      {
            low_erie = t_array[i][5];
            k=i;
      }
    }
    
    printf ("\nThe coldest water temperature for Lake Erie is: %.2lf °C\nThe dates are:\n", low_erie);
    for(i=0; i<366; ++i)
    {
      if (t_array[i][5]==low_erie)
      {
            k=i;
            calander(k, &month, &date);
            printf("%d/%d\n", date, month);
      }
    }
   

    for(i=0; i<366; ++i)
    {
      if (t_array[i][6]<low_ontario)
      {
            low_ontario = t_array[i][6];
            k=i;
      }
    }

    printf ("\nThe coldest water temperature for Lake Ontario is: %.2lf °C\nThe dates are:\n", low_ontario);
    for(i=0; i<366; ++i)
    {
      if (t_array[i][6]==low_ontario)
      {
            k=i;
            calander(k, &month, &date);
            printf("%d/%d\n", date, month);
      }
    }

   

    for(i=0; i<366; ++i)
    {
      if (t_array[i][7]<low_stclair)
      {
            low_stclair = t_array[i][7];
            k=i;
      }
    }

    printf ("\nThe coldest water temperature for Lake St. Clair is: %.2lf °C\nThe dates are:\n", low_stclair);
    for(i=0; i<366; ++i)
    {
      if (t_array[i][7]==low_stclair)
      {
            k=i;
            calander(k, &month, &date);
            printf("%d/%d\n", date, month);
      }
    }

  /*-----------------------------Q4----------------------------------------*/
  
    if (high_superior>high_michigan && high_superior>high_huron && high_superior>high_erie && high_superior>high_ontario && high_superior>high_stclair)
    {
        printf ("\nThe warmest water temperature for all lakes is: %.2lf °C at lake Superior\nThe dates are:\n", high_stclair);
    }
    if (high_michigan>high_superior && high_michigan>high_huron && high_michigan>high_erie && high_michigan>high_ontario && high_michigan>high_stclair)
    {
        printf ("\nThe warmest water temperature for all lakes is: %.2lf °C at lake Michigan\nThe dates are:\n", high_michigan);
    }
    
    

   

   

   

    /*-----------------------------Q5----------------------------------------*/

  

   

   

   int summer;

   double summer_t_superior, summer_t_michigan, summer_t_huron, summer_t_erie, summer_t_ontario, summer_t_stclair;

   double summer_sum_superior = 0, summer_sum_michigan = 0, summer_sum_huron = 0, summer_sum_erie = 0, summer_sum_ontario = 0, summer_sum_stclair = 0;

   double summer_avg_superior, summer_avg_michigan, summer_avg_huron, summer_avg_erie, summer_avg_ontario, summer_avg_stclair, summer_avg_tot;

   double summer_total = 266-172;

  

   for (summer = 171; summer<265; summer++)

    {

        summer_t_superior = t_array[summer][2];

        summer_sum_superior = summer_sum_superior + summer_t_superior;

 

        summer_t_michigan = t_array[summer][3];

        summer_sum_michigan = summer_sum_michigan + summer_t_michigan;

 

        summer_t_huron = t_array[summer][4];

        summer_sum_huron = summer_sum_huron + summer_t_huron;

 

        summer_t_erie = t_array[summer][5];

        summer_sum_erie = summer_sum_erie + summer_t_erie;

 

        summer_t_ontario = t_array[summer][6];

        summer_sum_ontario = summer_sum_ontario + summer_t_ontario;

 

        summer_t_stclair = t_array[summer][7];

        summer_sum_stclair = summer_sum_stclair + summer_t_stclair;

    }

  

    summer_avg_superior = summer_sum_superior/summer_total;

 

    summer_avg_michigan = summer_sum_michigan/summer_total;

 

    summer_avg_huron = summer_sum_huron/summer_total;

 

    summer_avg_erie = summer_sum_erie/summer_total;

 

    summer_avg_ontario = summer_sum_ontario/summer_total;

 

    summer_avg_stclair = summer_sum_stclair/summer_total;

 

    summer_avg_tot = (summer_avg_superior+summer_avg_michigan+summer_avg_huron+summer_avg_erie+summer_avg_ontario+summer_avg_stclair)/6;

  

    printf("\nThe summer average temperature of Lake Superior is %.2lf °C\n", (summer_avg_superior));

 

    printf("The summer average temperature of Lake Michigan is %.2lf °C\n", (summer_avg_michigan));

 

    printf("The summer average temperature of Lake Huron is %.2lf °C\n", (summer_avg_huron));

 

    printf("The summer average temperature of Lake Erie is %.2lf °C\n", (summer_avg_erie));

 

    printf("The summer average temperature of Lake Ontario is %.2lf °C\n", (summer_avg_ontario));

 

    printf("The summer average temperature of Lake St. Clair is %.2lf °C\n\n", (summer_avg_stclair));

 

 

    printf("The summer average temperature of all six lakes is %.2lf °C\n\n", summer_avg_tot);

  

   

   

    /*-----------------------------Q6----------------------------------------*/

   

    

    int winter1, winter2;

    double winter_t_superior, winter_t_michigan, winter_t_huron, winter_t_erie, winter_t_ontario, winter_t_stclair;

    double winter_sum_superior = 0, winter_sum_michigan = 0, winter_sum_huron = 0, winter_sum_erie = 0, winter_sum_ontario = 0, winter_sum_stclair = 0;

    double winter_avg_superior, winter_avg_michigan, winter_avg_huron, winter_avg_erie, winter_avg_ontario, winter_avg_stclair, winter_avg_tot;

    double winter_total = 80-1+366-355;

  

   for (winter1 = 0; winter1<79; winter1++)

    {

        winter_t_superior = t_array[winter1][2];

        winter_sum_superior = winter_sum_superior + winter_t_superior;

 

        winter_t_michigan = t_array[winter1][3];

        winter_sum_michigan = winter_sum_michigan + winter_t_michigan;

 

        winter_t_huron = t_array[winter1][4];

        winter_sum_huron = winter_sum_huron + winter_t_huron;

 

        winter_t_erie = t_array[winter1][5];

        winter_sum_erie = winter_sum_erie + winter_t_erie;

 

        winter_t_ontario = t_array[winter1][6];

        winter_sum_ontario = winter_sum_ontario + winter_t_ontario;

 

        winter_t_stclair = t_array[winter1][7];

        winter_sum_stclair = winter_sum_stclair + winter_t_stclair;

    }

  

    for (winter2 = 354; winter2<365; winter2++)

    {

        winter_t_superior = t_array[winter2][2];

        winter_sum_superior = winter_sum_superior + winter_t_superior;

 

        winter_t_superior = t_array[winter2][2];

        winter_sum_michigan = winter_sum_michigan + winter_t_michigan;

 

        winter_t_superior = t_array[winter2][2];

        winter_sum_huron = winter_sum_huron + winter_t_huron;

 

        winter_t_superior = t_array[winter2][2];

        winter_sum_erie = winter_sum_erie + winter_t_erie;

 

        winter_t_superior = t_array[winter2][2];

        winter_sum_ontario = winter_sum_ontario + winter_t_ontario;

 

        winter_t_superior = t_array[winter2][2];

        winter_sum_stclair = winter_sum_stclair + winter_t_stclair;

    }

  

    winter_avg_superior = winter_sum_superior/winter_total;

 

    winter_avg_michigan = winter_sum_michigan/winter_total;

 

    winter_avg_huron = winter_sum_huron/winter_total;

 

    winter_avg_erie = winter_sum_erie/winter_total;

 

    winter_avg_ontario = winter_sum_ontario/winter_total;

 

    winter_avg_stclair = winter_sum_stclair/winter_total;

 

    winter_avg_tot = (winter_avg_superior+winter_avg_michigan+winter_avg_huron+winter_avg_erie+winter_avg_ontario+winter_avg_stclair)/6;

  

    printf("The winter average temperature of Lake Superior is %.2lf °C\n", (winter_avg_superior));

 

    printf("The winter average temperature of Lake Michigan is %.2lf °C\n", (winter_avg_michigan));

 

    printf("The winter average temperature of Lake Huron is %.2lf °C\n", (winter_avg_huron));

 

    printf("The winter average temperature of Lake Erie is %.2lf °C\n", (winter_avg_erie));

 

    printf("The winter average temperature of Lake Ontario is %.2lf °C\n", (winter_avg_ontario));

 

    printf("The winter average temperature of Lake St. Clair is %.2lf °C\n\n", (winter_avg_stclair));

 

 

    printf("The winter average temperature of all six lakes is %.2lf °C\n\n", winter_avg_tot);

   

    

    /*-----------------------------Q7----------------------------------------*/

  

   

   

    int swim_totaldays_superior = 0, swim_totaldays_michigan = 0, swim_totaldays_huron = 0, swim_totaldays_erie = 0, swim_totaldays_ontario = 0, swim_totaldays_stclair = 0;

   

    for (i=0;i<366;++i)

    {

        t_superior = t_array[i][2];

        if (t_superior >= 20)

        swim_totaldays_superior++;

 

        t_michigan = t_array[i][3];

        if (t_michigan >= 20)

        swim_totaldays_michigan++;

 

        t_huron = t_array[i][4];

        if (t_huron >= 20)

        swim_totaldays_huron++;

 

        t_erie = t_array[i][5];

        if (t_erie >= 20)

        swim_totaldays_erie++;

 

        t_ontario = t_array[i][6];

        if (t_ontario >= 20)

        swim_totaldays_ontario++;

 

        t_stclair = t_array[i][7];

        if (t_stclair >= 20)

        swim_totaldays_stclair++;

    }

   

    printf ("The number of days you can swim comfortably (Above 20°C) in Lake Superior is %d\n", swim_totaldays_superior);

    printf ("The number of days you can swim comfortably (Above 20°C) in Lake Michigan is %d\n", swim_totaldays_michigan);

    printf ("The number of days you can swim comfortably (Above 20°C) in Lake Huron is %d\n", swim_totaldays_huron);

    printf ("The number of days you can swim comfortably (Above 20°C) in Lake Erie is %d\n", swim_totaldays_erie);

    printf ("The number of days you can swim comfortably (Above 20°C) in Lake Ontario is %d\n", swim_totaldays_ontario);

    printf ("The number of days you can swim comfortably (Above 20°C) in Lake St. Clair is %d\n\n", swim_totaldays_stclair);

   

    

    

    /*-----------------------------Q8----------------------------------------*/

   

    

    

    int frozen_totaldays_superior = 0, frozen_totaldays_michigan = 0, frozen_totaldays_huron = 0, frozen_totaldays_erie = 0, frozen_totaldays_ontario = 0, frozen_totaldays_stclair = 0;

   

    for (i=0;i<366;++i)

    {

        t_superior = t_array[i][2];

        if (t_superior < 0)

        frozen_totaldays_superior++;

 

        t_michigan = t_array[i][3];

        if (t_michigan < 0)

        frozen_totaldays_michigan++;

 

        t_huron = t_array[i][4];

        if (t_huron < 0)

        frozen_totaldays_huron++;

 

        t_erie = t_array[i][5];

        if (t_erie < 0)

        frozen_totaldays_erie++;

 

        t_ontario = t_array[i][6];

        if (t_ontario < 0)

        frozen_totaldays_ontario++;

 

        t_stclair = t_array[i][7];

        if (t_stclair < 0)

        frozen_totaldays_stclair++;

    }

   

    printf ("Lake Superior is frozen (Below 0°C) for %d days\n", frozen_totaldays_superior);

    printf ("Lake Michigan is frozen (Below 0°C) for %d days\n", frozen_totaldays_michigan);

    printf ("Lake Huron is frozen (Below 0°C) for %d days\n", frozen_totaldays_huron);

    printf ("Lake Erie is frozen (Below 0°C) for %d days\n", frozen_totaldays_erie);

    printf ("Lake Ontario is frozen (Below 0°C) for %d days\n", frozen_totaldays_ontario);

    printf ("Lake St. Clair is frozen (Below 0°C) for %d days\n\n", frozen_totaldays_stclair);

   

    return (0);

 

}







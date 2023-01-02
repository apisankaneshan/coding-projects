#include <stdio.h> /*include standard input output library*/

int
main(void) /*start main function*/
{
	FILE *input; /*make a pointer to a unknown file*/
	
	int e_numw1, s_numw1; /*introduce variables for Employee Number and Number of Shifts*/
	int e_numw2, s_numw2;
	int e_numw3, s_numw3;
	int e_numw4, s_numw4;
	int e_numw5, s_numw5;
	int e_numw6, s_numw6;
	int e_numw7, s_numw7;
	int e_numw8, s_numw8;
	double bwrw1, bwrw2, bwrw3, bwrw4, bwrw5, bwrw6, bwrw7, bwrw8; /*variables for base wage rate*/
	double h_workw1s1, h_workw1s2, h_workw1s3, h_workw1s4, h_workw1s5, h_workw1s6; /*variables for hours worked each shift*/
	double h_workw2s1, h_workw2s2, h_workw2s3;
	double h_workw3s1, h_workw3s2, h_workw3s3, h_workw3s4, h_workw3s5, h_workw3s6, h_workw3s7, h_workw3s8;
	double h_workw4s1, h_workw4s2;
	double h_workw5s1;
	double h_workw6s1, h_workw6s2, h_workw6s3, h_workw6s4, h_workw6s5, h_workw6s6, h_workw6s7;
	double h_workw7s1, h_workw7s2, h_workw7s3, h_workw7s4, h_workw7s5, h_workw7s6, h_workw7s7, h_workw7s8, h_workw7s9, h_workw7s10, h_workw7s11;
	double h_workw8s1, h_workw8s2, h_workw8s3, h_workw8s4;
	
	input = fopen("L4_data.txt", "r"); /*open the file with info reffered to at the beginning and read from it*/
	
	if(input == NULL) /*incase file isnt opened and read system will tell me*/
	{
		printf("Unable to open file\n");
	}
	else /*make headers of the table*/
	{
	    printf("Employee Number    Number of Shifts    Base Wage Rate ($)    Number of Hours Worked (h)    Gross Pay ($)\n");
	    printf("---------------    ----------------    ------------------    --------------------------    -------------\n");
	    
	    /*take all data from the file and put it into the variables declared above*/
	    while(fscanf(input, "%d %d %lf %lf %lf %lf %lf %lf %lf %d %d %lf %lf %lf %lf %d %d %lf %lf %lf %lf %lf %lf %lf %lf %lf %d %d %lf %lf %lf %d %d %lf %lf %d %d %lf %lf %lf %lf %lf %lf %lf %lf %d %d %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %d %d %lf %lf %lf %lf %lf", &e_numw1, &s_numw1, &bwrw1, &h_workw1s1, &h_workw1s2, &h_workw1s3, &h_workw1s4, &h_workw1s5, &h_workw1s6, &e_numw2, &s_numw2, &bwrw2, &h_workw2s1, &h_workw2s2, &h_workw2s3, &e_numw3, &s_numw3, &bwrw3, &h_workw3s1, &h_workw3s2, &h_workw3s3, &h_workw3s4, &h_workw3s5, &h_workw3s6, &h_workw3s7, &h_workw3s8, &e_numw4, &s_numw4, &bwrw4, &h_workw4s1, &h_workw4s2, &e_numw5, &s_numw5, &bwrw5, &h_workw5s1, &e_numw6, &s_numw6, &bwrw6, &h_workw6s1, &h_workw6s2, &h_workw6s3, &h_workw6s4, &h_workw6s5, &h_workw6s6, &h_workw6s7, &e_numw7, &s_numw7, &bwrw7, &h_workw7s1, &h_workw7s2, &h_workw7s3, &h_workw7s4, &h_workw7s5, &h_workw7s6, &h_workw7s7, &h_workw7s8, &h_workw7s9, &h_workw7s10, &h_workw7s11, &e_numw8, &s_numw8, &bwrw8, &h_workw8s1, &h_workw8s2, &h_workw8s3, &h_workw8s4) != EOF)
	    {
	        double w1_hours, w2_hours, w3_hours, w4_hours, w5_hours, w6_hours, w7_hours, w8_hours; /*variables for total hours worked*/
	        double w1_pay, w2_pay, w3_pay, w4_pay, w5_pay, w6_pay, w7_pay, w8_pay; /*variables for gross pay*/
	        w1_hours = h_workw1s1 + h_workw1s2 + h_workw1s3 + h_workw1s4 + h_workw1s5 + h_workw1s6; /*find total hours worked*/
	        w2_hours = h_workw2s1 + h_workw2s2 + h_workw2s3;
	        w3_hours = h_workw3s1 + h_workw3s2 + h_workw3s3 + h_workw3s4 + h_workw3s5 + h_workw3s6 + h_workw3s7 + h_workw3s8;
	        w4_hours = h_workw4s1 + h_workw4s2;
	        w5_hours = h_workw5s1;
	        w6_hours = h_workw6s1 + h_workw6s2 + h_workw6s3 + h_workw6s4 + h_workw6s5 + h_workw6s6 + h_workw6s7;
	        w7_hours = h_workw7s1 + h_workw7s2 + h_workw7s3 + h_workw7s4 + h_workw7s5 + h_workw7s6 + h_workw7s7 + h_workw7s8 + h_workw7s9 + h_workw7s10 + h_workw7s11;
	        w8_hours = h_workw8s1 + h_workw8s2 + h_workw8s3 + h_workw8s4;
	        if (w1_hours<=15.0) /*assign the premiums*/
	        {
	            w1_pay = w1_hours*bwrw1;
	        }
	        if (w1_hours>15 && w1_hours<=25)
	        {
	            w1_pay = w1_hours*(bwrw1*1.05);
	        }
	        if (w1_hours>25)
	        {
	            w1_pay = w1_hours*(bwrw1*1.10);
	        }
	        if (w2_hours<=15.0)
	        {
	            w2_pay = w2_hours*bwrw2;
	        }
	        if (w2_hours>15 && w2_hours<=25)
	        {
	            w2_pay = w2_hours*(bwrw2*1.05);
	        }
	        if (w2_hours>25)
	        {
	            w2_pay = w2_hours*(bwrw2*1.10);
	        }
	        if (w3_hours<=15.0)
	        {
	            w3_pay = w3_hours*bwrw3;
	        }
	        if (w3_hours>15 && w3_hours<=25)
	        {
	            w3_pay = w3_hours*(bwrw3*1.05);
	        }
	        if (w3_hours>25)
	        {
	            w3_pay = w3_hours*(bwrw3*1.10);
	        }
	        if (w4_hours<=15.0)
	        {
	            w4_pay = w4_hours*bwrw4;
	        }
	        if (w4_hours>15 && w4_hours<=25)
	        {
	            w4_pay = w4_hours*(bwrw4*1.05);
	        }
	        if (w4_hours>25)
	        {
	            w4_pay = w4_hours*(bwrw4*1.10);
	        }
	        if (w5_hours<=15.0)
	        {
	            w5_pay = w5_hours*bwrw5;
	        }
	        if (w5_hours>15 && w5_hours<=25)
	        {
	            w5_pay = w5_hours*(bwrw5*1.05);
	        }
	        if (w5_hours>25)
	        {
	            w5_pay = w5_hours*(bwrw5*1.10);
	        }
	        if (w6_hours<=15.0)
	        {
	            w6_pay = w6_hours*bwrw6;
	        }
	        if (w6_hours>15 && w6_hours<=25)
	        {
	            w6_pay = w6_hours*(bwrw6*1.05);
	        }
	        if (w6_hours>25)
	        {
	            w6_pay = w6_hours*(bwrw6*1.10);
	        }
	        if (w7_hours<=15.0)
	        {
	            w7_pay = w7_hours*bwrw7;
	        }
	        if (w7_hours>15 && w7_hours<=25)
	        {
	            w7_pay = w7_hours*(bwrw7*1.05);
	        }
	        if (w7_hours>25)
	        {
	            w7_pay = w7_hours*(bwrw7*1.10);
	        }
	        if (w8_hours<=15.0)
	        {
	            w8_pay = w8_hours*bwrw8;
	        }
	        if (w8_hours>15 && w8_hours<=25)
	        {
	            w8_pay = w8_hours*(bwrw8*1.05);
	        }
	        if (w8_hours>25)
	        {
	            w8_pay = w8_hours*(bwrw8*1.10);
	        }
	        
	        /*print the table*/
	        printf("%d %14d %23.2lf %21.2lf %30.2lf\n", e_numw1, s_numw1, bwrw1, w1_hours, w1_pay);
	        printf("%d %14d %23.2lf %21.2lf %30.2lf\n", e_numw2, s_numw2, bwrw2, w2_hours, w2_pay);
	        printf("%d %14d %23.2lf %21.2lf %30.2lf\n", e_numw3, s_numw3, bwrw3, w3_hours, w3_pay);
	        printf("%d %14d %23.2lf %21.2lf %30.2lf\n", e_numw4, s_numw4, bwrw4, w4_hours, w4_pay);
	        printf("%d %14d %23.2lf %21.2lf %30.2lf\n", e_numw5, s_numw5, bwrw5, w5_hours, w5_pay);
	        printf("%d %14d %23.2lf %21.2lf %30.2lf\n", e_numw6, s_numw6, bwrw6, w6_hours, w6_pay);
	        printf("%d %15d %22.2lf %21.2lf %31.2lf\n", e_numw7, s_numw7, bwrw7, w7_hours, w7_pay);
	        printf("%d %14d %23.2lf %21.2lf %30.2lf\n", e_numw8, s_numw8, bwrw8, w8_hours, w8_pay);
		    fclose(input); /*close the file*/
	    }
	
		
	}
	
	return(0);
}

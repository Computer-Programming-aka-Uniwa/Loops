#include <stdio.h>
#include <math.h>
#define pi 3.14159                                                            

int main (int argc, char **argv)
{
	system ("chcp 1253");
	
	double deg, rad;                                                           // Variable declaration
	double sine;
	double term, next_term, diff_terms, abs_diff_terms, first_sin_T;
	double diff_sin_T, abs_diff_sin_T;
	double sin_T = 0.0;                                                        // Variable initialization
	int i;
	int j = 1;                                                                 // Variable initialization
	int sign = -1;                                                             // Variable initialization
	
	printf ("========================================================\n\n");
	printf ("Calculation of the sine of an angle\n\n");                       // Title of the program
	printf ("========================================================\n\n");
	printf ("Enter angle in the range of the first cycle [0,360]\n\n");              
	printf ("Degrees  : ");                                                     
	scanf ("%lf", &deg);                                                       // Input the angle in degrees
	printf ("\n--------------------------------------------------------\n\n"); 
	rad = (pi * deg) / 180;                                                    // Convert angle from degrees to radians
	printf ("Degrees  : [%20.6lf]\n", deg);                                     // Print the angle in degrees
	printf ("Radians  : [%20.6lf]\n\n", rad);	                               // Print the angle in radians
	sine = sin (rad);                                                          // Calculate the sine of the angle using the "sin(ù)" function
	do                                                                         /* 1st Loop */
	{
		term = 1;                                                              // Initialize the first term of the series
		for (i = 1 ; i <= j ; i++)                                             /* 2nd Loop */
		{
			term = term * (rad / i);                                           // Calculate the first term, second term ... (ù^1 / 1!, ù^3 / 3! ...)
		}
		j = j + 2;                                                             // Increase the auxiliary variable for calculating the second term, third ...
		next_term =  term * ((rad * rad) / (j * (j - 1)));                     // Calculate the second term, third ... (ù^3 / 3!, ù^5 / 5!)
		diff_terms = next_term - term;                                         // Calculate the difference between the second term and the first, third and second ...
		abs_diff_terms = fabs (diff_terms);                                    // Calculate the absolute value of the difference 
		if (j == 3)                                                            /* (~) 1st iteration of the 1st loop */ 
		{                                                                      /* ù^1 / 1! - ù^3 / 3! */ 
			first_sin_T = term + (sign * next_term); 					       // Calculate the first sum with the appropriate sign "sign" 
			sin_T = sin_T + first_sin_T;                                       // Store the sum in the "sin_T" variable
			sign = sign * (-1);                                                // Change sign
		}
		else                                                                   /* (~) 2nd, 3rd ... iteration of the 1st loop */
		{                                                                      /* (ù^1 / 1! - ù^3 / 3!) + ù^5 / 5! ... */
			sin_T = sin_T + (sign * next_term); 							   // Calculate the second sum, third ... with the appropriate sign "sign" 
			sign = sign * (-1);                                                // Change sign
		}
	}
	while (abs_diff_terms > 0.000001);                                              
	
	printf ("Sine    : [%20.6lf]\n", sine);                                    // Print the sine of the angle using the ready function "sin(ù)"                                                   
	printf ("Taylor  : [%20.6lf]\n\n", sin_T);                                 // Print the sine of the angle using the Taylor series
	diff_sin_T = sine - sin_T;                                                 // Calculate the difference between the sine and the Taylor series
	abs_diff_sin_T = fabs (diff_sin_T);                                        // Calculate the absolute value of the difference between the sine and the Taylor series
	if (abs_diff_sin_T <= 0.0000009)                                           /* (~) Acceptable absolute value of the difference between the sine and the Taylor series */
	{
		printf ("Sine ~= Taylor\n"); 
		printf ("The two numbers are almost equal\n");                     
	}
	else                                                                       /* (~) Unacceptable absolute value of the difference between the sine and the Taylor series */
	{
		printf ("Sine != Taylor\n");  
		printf ("The two numbers are not almost equal\n");                                                   
	}
	
	return 0;                   
}

#include <stdio.h>

int main (int argc, char **argv)

{
	system ("chcp 1253");

	int N, n;                                                                    // Variable declaration
	int i = 0;												                     // Variable initialization
	int pow;
	int evens = 0;                                                               // Variable initialization
	int neg = 0;										                         // Variable initialization
	int prod = 1;                                                                // Variable initialization
	int pos = 0; 											                     // Variable initialization
	int sum = 0;									                             // Variable initialization
	float avg;
	
	printf ("===================================================\n\n");
	printf ("Mathematical operations with integers\n\n");                         // Program title
	printf ("===================================================\n\n"); 	
	printf ("Enter N integers: ");              
	scanf ("%d", &N);                                                            // Input the number of integers
	printf ("\n--------------------------------------------------\n\n");        
	printf ("The number of integers: [%20d]\n\n", N);                             // Print the number of integers
	if (N > 0)                                                                   /* (~) One or more integers */
	{														  
		while (i < N)                                                            /* Loop */
		{
			printf ("--------------------------------------------------\n\n");
			printf ("Enter an integer: ");           
			scanf ("%d", &n);                                                    // Input the integers
			printf ("\n--------------------------------------------------\n\n");
			printf ("The integer: [%20d]\n\n", n);                                // Print the integers
			if (n % 2 != 0)                                                      /* (!) Odd number input */
			{
				pow = n * n;                                                     // Calculate the square of the odd number
				printf ("Square of odd number: [%20d]\n\n", pow);                 // Print the square of the odd number
				printf ("\nOdd number\n");
			}
			else 										                         /* (!) Even number input */	
			{
				evens++;								                         // Count the number of even numbers
				printf ("\nEven number\n");
			}	
			if (n >= 0)									                         /* (+) Positive number input */
			{
				pos++;							                                 // Count the number of positive numbers
				sum = sum + n;							                         // Sum of positive numbers
				avg = (float) sum / pos; 			                             // Calculate the average of positive numbers
			}
			else										                         /* (+) Negative number input */
			{
				neg++;							                                 // Count the number of negative numbers
				prod = prod * n;                                                 // Calculate the product of negative numbers
			}
			i++;		
		}
		
		if (neg != 0)									                         /* (-) One or more negative numbers */
		{													   
			printf ("--------------------------------------------------\n\n"); 
			printf ("Number of even numbers: [%20d]\n", evens);                   // Print the number of even numbers
			printf ("Average of positive numbers: [%20.6f]\n", avg);              // Print the average of positive numbers
			printf ("Product of negative numbers: [%20d]\n", prod);               // Print the product of negative numbers
		}
		else												                     /* (-) No negative numbers */
		{
			printf ("--------------------------------------------------\n\n"); 
			prod--;                                                              // Assign value "0" to variable "prod"
			printf ("Number of even numbers: [%20d]\n", evens);                   // Print the number of even numbers
			printf ("Average of positive numbers: [%20.6f]\n", avg);              // Print the average of positive numbers
			printf ("Product of negative numbers: [%20d]\n", prod);               // Print the product of negative numbers
		}
	}
	else													                     /* (~) No integers */ 
	{
		printf ("--------------------------------------------------\n\n"); 
		prod--;                                                                 // Assign value "0" to variable "prod"
		printf ("Number of even numbers: [%20d]\n", evens);                    // Print the number of even numbers
		printf ("Average of positive numbers: [%20.6f]\n", avg);               // Print the average of positive numbers
		printf ("Product of negative numbers: [%20d]\n", prod);                // Print the product of negative numbers
	}
	
	return 0;
}

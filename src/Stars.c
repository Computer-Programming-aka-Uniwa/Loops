#include <stdio.h>

int main (int argc, char **argv)

{
	system ("chcp 1253");
	
	int lines;                                                               // Variable declaration                                          
	int i, j, k;
	
	printf ("===================================================\n\n");
	printf ("Shapes with asterisks\n\n");                                     // Program title
	printf ("===================================================\n\n");
	printf ("Enter number of lines: ");                              
	scanf ("%d", &lines);                                                    // Input the number of lines
		printf ("\n--------------------------------------------------\n\n");
	for (i = 1 ; i <= lines ; i++)                                           /* 1st shape */
	{
		for (j = 1 ; j <= i ; j++)
		{
			printf ("*");
		}
		printf ("\n");
	}
	printf ("\n--------------------------------------------------\n\n");
	for (i = 0 ; i < lines ; i++)                                            /* 2nd shape */
	{
		for (j = lines - 1 ; j > i ; j--)
		{
			printf (" ");
		}
		for (k = 0 ; k <= j ; k++)
		{
			printf ("*");
		}
		printf ("\n");
	}
		printf ("\n--------------------------------------------------\n\n");
	for (i = 0 ; i < lines ; i++)                                            /* 3rd shape */
	{
		for (j = lines - 1 ; j > i ; j--)
		{
			printf (" ");
		}
		for (k = 0 ; k <= j * 2 ; k++)
		{
			printf ("*");
		}
		printf ("\n");
	}
	printf ("\n--------------------------------------------------\n\n");
	for (i = 0 ; i < lines ; i++)                                            /* 4th shape */
	{
		for (j = 0 ; j < lines ; j++)
		{
			if (i == 0 || j == 0 || i == lines - 1 || j == lines - 1)        /* (~) Point on the perimeter of the shape */
			{
				printf ("*");
			}
			else													         /* (~) Point inside the perimeter of the shape */
			{
				if (i == j)                                                  /* (!) Point on the main diagonal */
				{
					printf (".");
				}
				else                                                         /* (!) Point off the main diagonal */
				{
					if (i + j == lines - 1)                                  /* (+) Point on the secondary diagonal */
					{
						printf (".");
					}
					else                                                     /* (+) Point off the secondary diagonal */
					{
						printf (" ");
					}
				}
			}	
		}
		printf ("\n");
	}

	return 0;
}

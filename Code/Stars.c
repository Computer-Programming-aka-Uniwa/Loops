#include <stdio.h>

int main (int argc, char **argv)

{
	system ("chcp 1253");
	
	int lines;                                                               // ������ ����������                                          
	int i, j, k;
	
	printf ("===================================================\n\n");
	printf ("������� �� �����������\n\n");                                   // ������ ������������
	printf ("===================================================\n\n");
	printf ("�������� ������ ������� : ");                              
	scanf ("%d", &lines);                                                    // �������� ��� ������� ��� �������
		printf ("\n--------------------------------------------------\n\n");
	for (i = 1 ; i <= lines ; i++)                                           /* 1� ����� */
	{
		for (j = 1 ; j <= i ; j++)
		{
			printf ("*");
		}
		printf ("\n");
	}
	printf ("\n--------------------------------------------------\n\n");
	for (i = 0 ; i < lines ; i++)                                            /* 2� ����� */
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
	for (i = 0 ; i < lines ; i++)                                            /* 3� ����� */
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
	for (i = 0 ; i < lines ; i++)                                            /* 4� ����� */
	{
		for (j = 0 ; j < lines ; j++)
		{
			if (i == 0 || j == 0 || i == lines - 1 || j == lines - 1)        /* (~) ������ ����� ��� ���������� ��� �������� */
			{
				printf ("*");
			}
			else													         /* (~) ������ ����� ��� ���������� ��� �������� */
			{
				if (i == j)                                                  /* (!) ������ ����� ��� ������ ��������� */
				{
					printf (".");
				}
				else                                                         /* (!) ������ ����� ��� ������ ��������� */
				{
					if (i + j == lines - 1)                                  /* (+) ������ ����� ��� ������������� ��������� */
					{
						printf (".");
					}
					else                                                     /* (+) ������ ����� ��� ������������� ��������� */
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

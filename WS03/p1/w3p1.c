/*
	==================================================
	Workshop #2 (Part-1):
	==================================================
	Name   : Abhi Bansal
	ID     : 122132210
	Email  : abansal19@myseneca.ca
	Section: NLL
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MIN_YEAR 2010
#define MAX_YEAR 2021
int main()
{
	int JAN = 1 ;
	int DEC = 12;
	
	int year;
	int	month;


	printf("General Well-being Log\n");
	printf("======================\n");

	printf("Set the year and month for the well-being log (YYYY MM): ");
	scanf("%d %d", &year, &month);
	

	if (year < MIN_YEAR)
	{
		printf("   ERROR: The year must be between %d and %d inclusive\n", MIN_YEAR, MAX_YEAR);
		printf("Set the year and month for the well-being log (YYYY MM): ");
		scanf("%d %d", &year, &month);
	}

	if (year > MAX_YEAR)
	{
		printf("   ERROR: The year must be between %d and %d inclusive\n", MIN_YEAR, MAX_YEAR);
		printf("Set the year and month for the well-being log (YYYY MM): ");
		scanf("%d %d", &year, &month);
	}

	if (month < JAN)
	{
		printf("   ERROR: Jan.(1) - Dec.(12)\n");
		printf("Set the year and month for the well-being log (YYYY MM): ");
		scanf("%d %d", &year, &month);
	}

	if (month > DEC)
	{
		printf("   ERROR: Jan.(1) - Dec.(12)\n");
		printf("Set the year and month for the well-being log (YYYY MM): ");
		scanf("%d %d", &year, &month);
	}
	while ((year<MIN_YEAR || year> MAX_YEAR) && (month<JAN || month>DEC))
	{
		printf("   ERROR: The year must be between %d and %d inclusive\n", MIN_YEAR, MAX_YEAR);
		printf("   ERROR: Jan.(1) - Dec.(12)\n");
		printf("Set the year and month for the well-being log (YYYY MM): ");
		scanf("%d %d", &year, &month);

	}

	if (year >= MIN_YEAR && year <= MAX_YEAR && month >= JAN && month <= DEC);
	printf("\n");
	printf("*** Log date set! ***\n");
	printf("\n");
	switch (month)
	{
	case 1:
		printf("Log starting date: %d-JAN-01\n", year);
		break;
	case 2:
		printf("Log starting date: %d-FEB-01\n", year);
		break;
	case 3:
		printf("Log starting date: %d-MAR-01\n", year);
		break;
	case 4:
		printf("Log starting date: %d-APR-01\n", year);
		break;
	case 5:
		printf("Log starting date: %d-MAY-01\n", year);
		break;
	case 6:
		printf("Log starting date: %d-JUN-01\n", year);
		break;
	case 7:
		printf("Log starting date: %d-JUL-01\n", year);
		break;
	case 8:
		printf("Log starting date: %d-AUG-01\n", year);
		break;
	case 9:
		printf("Log starting date: %d-SEP-01\n", year);
		break;
	case 10:
		printf("Log starting date: %d-OCT-01\n", year);
		break;
	case 11:
		printf("Log starting date: %d-NOV-01\n", year);
		break;
	case 12:
		printf("Log starting date: %d-DEC-01\n", year);
		break;
	}
	 
	 return 0;
}



/*
	==================================================
	Workshop #3 (Part-2):
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
#define LOG_DAYS 3

int main()
{
	int JAN = 1;
	int DEC = 12;
	int i;
	int year;
	int	month;
	float mor1;
	float eve1;
	float max_temp = 5.0;
	float min_temp = 0.0;
	double total_mor=0;
    double total_eve = 0;

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
		for (i = 0; i < LOG_DAYS; i++)
		{
		switch (month)
		{
		case 1:
			printf("%d-JAN-0%d\n", year, i + 1);
			break;
		case 2:
			printf("%d-FEB-0%d\n", year, i + 1);
			break;
		case 3:
			printf("%d-MAR-0%d\n", year, i + 1);
			break;
		case 4:
			printf("%d-APR-0%d\n", year, i + 1);
			break;
		case 5:
			printf("%d-MAY-0%d\n", year, i + 1);
			break;
		case 6:
			printf("%d-JUN-0%d\n", year, i + 1);
			break;
		case 7:
			printf("%d-JUL-0%d\n", year, i + 1);
			break;
		case 8:
			printf("%d-AUG-0%d\n", year, i + 1);
			break;
		case 9:
			printf("%d-SEP-0%d\n", year, i + 1);
			break;
		case 10:
			printf("%d-OCT-0%d\n", year, i + 1);
			break;
		case 11:
			printf("%d-NOV-0%d\n", year, i + 1);
			break;
		case 12:
			printf("%d-DEC-0%d\n", year, i + 1);
			break;
		}
		
		printf("   Morning rating (0.0-5.0): ");
		scanf("%f", &mor1);

		while ((mor1 < min_temp) || (mor1 > max_temp))
		{
			printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
			printf("   Morning rating (0.0-5.0): ");
			scanf("%f", &mor1);
		}

		if (mor1 >= min_temp || mor1 <= max_temp)
			total_mor = total_mor + mor1;
			printf("   Evening rating (0.0-5.0): ");
		scanf("%f", &eve1);

		while ((eve1 < min_temp) || (eve1 > max_temp))
		{
			printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
			printf("   Evening rating (0.0-5.0): ");
			scanf("%f", &eve1);
		}
		if (eve1 >= min_temp || eve1 <= max_temp)
			total_eve = total_eve + eve1;
			printf("\n");

	}
	printf("Summary\n");
	printf("=======\n");
	printf("Morning total rating: %.3f\n", total_mor);
	printf("Evening total rating: %.3f\n", total_eve);
	printf("----------------------------\n");
	printf("Overall total rating: %.3f\n", total_mor+total_eve);
	printf("\n");
	printf("Average morning rating:  %.1f\n", (total_mor) / 3);
	printf("Average evening rating:  %.1f\n", (total_eve) / 3);
	printf("----------------------------\n");
	printf("Average overall rating:  %.1f\n", (total_mor + total_eve)/6);
	return 0;
}
		
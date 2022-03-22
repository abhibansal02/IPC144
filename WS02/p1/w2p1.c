/*
	==================================================
	Workshop #2 (Part-1):
	==================================================
	Name   : Abhi Bansal
	ID     : 122132210
	Email  : Abhi Bansal
	Section: NLL
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	printf("Change Maker Machine\n");
	printf("====================\n");
	float amount;
	printf("Enter dollars and cents amount to convert to coins: $");
	scanf("%f", &amount);

    int pennies = amount * 100; 

	int toonies = pennies/200;
	double new_amount = pennies % 200;

	int loonies = new_amount / 100 ;
	double new_amount2 = pennies % 100 ;

	int quarters = new_amount2 / 25 ;
	double new_amount3 = pennies % 25;

	printf("\n");
	printf("$2.00 Toonies  X %d (remaining: $%.2lf)\n", toonies, new_amount/100);
	printf("$1.00 Loonies  X %d (remaining: $%.2lf)\n", loonies , new_amount2 / 100);
	printf("$0.25 Quarters X %d (remaining: $%.2lf)\n",quarters, new_amount3 / 100);
	printf("\n");
	printf("Machine error! Thank you for letting me keep $%.2lf!\n", new_amount3 / 100);
	return 0;
} 

	


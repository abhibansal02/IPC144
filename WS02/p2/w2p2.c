/*
	==================================================
	Workshop #2 (Part-2):
	==================================================
	Name   : Abhi Bansal
	ID     : 122132210
	Email  : abansal19@myseneca.ca
	Section: NLL
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>




int main()
{
	float amount;

	printf("Change Maker Machine\n");
	printf("====================\n");
	printf("Enter dollars and cents amount to convert to coins: $");
	scanf("%f", &amount);


	printf("Service fee (5.0 percent): %.2f\n", amount*0.05+0.005);
	int pennies = (amount - amount * 0.05 + 0.005) * 100;
	printf("Balance to dispense: $%0.2f\n", (float)pennies/100);
		

		int toonies = pennies / 200;
		int new_amount = pennies % 200;

		int loonies = new_amount / 100;
		int new_amount2 = new_amount % 100;

		int quarters = new_amount2 / 25;
		int new_amount3 = new_amount2 % 25;

		int dimes = new_amount3 / 10;
		int new_amount4 = new_amount3 % 10;

		int nickels = new_amount4 / 5;
		int new_amount5 = new_amount4 % 5;

		int tpennies = new_amount5 / 1;
		int new_amount6 = new_amount5 % 1;

	printf("\n");
	printf("$2.00 Toonies  X %d (remaining: $%.2f)\n", toonies, (float)new_amount / 100);
	printf("$1.00 Loonies  X %d (remaining: $%.2f)\n", loonies, (float)new_amount2 / 100);
	printf("$0.25 Quarters X %d (remaining: $%.2f)\n", quarters, (float)new_amount3 / 100);
	printf("$0.10 Dimes    X %d (remaining: $%.2f)\n", dimes, (float)new_amount4 / 100);
	printf("$0.05 Nickels  X %d (remaining: $%.2f)\n", nickels, (float)new_amount5 / 100);
	printf("$0.01 Pennies  X %d (remaining: $%.2f)\n", tpennies, (float)new_amount6 / 100);
	printf("\n");

	printf("All coins dispensed!\n");

	return 0;
}




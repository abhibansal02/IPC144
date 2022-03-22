/*
	==================================================
	Workshop #4 (Part-1):
	==================================================
	Name   : Abhi Bansal
	ID     : 122132210
	Email  : abansal19@myseneca.ca
	Section: NLL
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define Max_items 10
#define Min_items 1
int main()
{
	float monthly_income;
	const float min_income = 500.00, min_cost = 100.00;
	const float max_income = 400000.00;
	int items[Max_items] = { 0 }, i, wish_items, item_priority, priority[Max_items] = { 0 }, min_priority = 1, max_priority = 3;
	double Item_cost[Max_items] = { 0 };
	double item_cost = 0.0;
	double total = 0;
	char finance, finance_opt[Max_items] = { 0 };
	printf("+--------------------------+\n");
	printf("+   Wish List Forecaster   |\n");
	printf("+--------------------------+\n\n");
	printf("Enter your monthly NET income: $");
	scanf("%f", &monthly_income);
	while (monthly_income < min_income || monthly_income > max_income)
	{
		if (monthly_income < min_income)
			printf("ERROR: You must have a consistent monthly income of at least $%.2f\n\n", min_income);
		if (monthly_income > max_income)//(monthly_income > max_income)
			printf("ERROR: Liar! I'll believe you if you enter a value no more than $%.2f\n\n", max_income);
		printf("Enter your monthly NET income: $");
		scanf("%f", &monthly_income);
	}
	printf("\n");
	printf("How many wish list items do you want to forecast?: ");
	scanf("%d", &wish_items);

	while (wish_items < Min_items || wish_items > Max_items)
	{
		if (wish_items < Min_items)
			printf("ERROR: List is restricted to between %d and %d items.\n\n", Min_items, Max_items);
		if (wish_items > Max_items)
			printf("ERROR: List is restricted to between %d and %d items.\n\n", Min_items, Max_items);
		printf("How many wish list items do you want to forecast?: ");
		scanf("%d", &wish_items);
		
	}
	
	for (i = 1; i <= wish_items; i++)
	{
		items[i] = i;
		printf("\n");
		printf("Item-%d Details:\n", i);
		printf("   Item cost: $");
		scanf("%lf", &item_cost);
		//Item_cost[i]= item_cost;
		if (item_cost < min_cost)
		{
			printf("      ERROR: Cost must be at least $%.2f\n", min_cost);
			printf("   Item cost: $");
			scanf("%lf", &item_cost);
		}
		if (item_cost > min_cost)
		{
			Item_cost[i] = item_cost;
		}
		
		do
		{
			printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
			scanf("%d", &item_priority);
			if (item_priority < 1 || item_priority > 3)
			{
				printf("      ERROR: Value must be between %d and %d\n", min_priority, max_priority);
				//priority[i] = item_priority;
			}
			if (item_priority >= min_priority || item_priority <= max_priority) {
				priority[i] = item_priority;
				//printf("   ERROR: Value must be between 1 and 3\n");
			}
		} while (item_priority < min_priority || item_priority > max_priority);


		do 
		{
			printf("   Does this item have financing options? [y/n]: ");
			scanf(" %c", &finance);

			if (finance != 'y' && finance != 'n')
			{

				printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
			}
			if (finance == 'y' || finance == 'n')
			{
				finance_opt[i] = finance;
			}
		} while (finance != 'y' && finance != 'n');
		total += Item_cost[i];
	}	
	printf("\n");
	printf("Item Priority Financed        Cost\n");
	printf("---- -------- -------- -----------\n");
	
	for (i = 1; i <= wish_items; i++)
	{
		printf("%3d  %5d    %5c    %11.2lf\n", items[i], priority[i], finance_opt[i], Item_cost[i]);
	}
	printf("---- -------- -------- -----------\n");
	printf("                      $%11.2lf\n\n", total);
	printf("Best of luck in all your future endeavours!\n");
	return 0;
}
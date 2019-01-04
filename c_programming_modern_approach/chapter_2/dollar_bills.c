/*
 * Name: Andres Schuchert
 * Date: 05/25/18
 * Purpose: Write a program that asks the user to enter a U.S dollar amount
 * and then shows how to pay that amount using the smallest number of $20,
 * $10, $5 and $1 bills.
 */
#include <stdio.h>

#define TWENTY 20
#define TEN 10
#define FIVE 5
#define ONE 1

int main(void)
{
	int amount, count;
	printf("Enter an amount: ");
	scanf("%d", &amount);
	count = amount / TWENTY;
	printf("$20 bills: %d\n", count);
	amount -= TWENTY * count;
	count = amount / TEN;
	printf("$10 bills: %d\n", count);
	amount -= TEN * count;
	count = amount / FIVE;
	printf("$5 bills: %d\n", count);
	amount -= FIVE * count;
	count = amount / ONE;
	printf("$1 bills: %d\n", count);
	amount -= ONE * count;
	return 0;
}
/*
	Note to self:
	
*/
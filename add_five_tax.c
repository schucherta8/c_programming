/*
 * Name: Andres Schuchert
 * Date: 05/24/18
 * Purpose: Add 5% to amount
*/
#include <stdio.h>
#define TAX 0.05f

int main(void)
{
	float amount;

	printf("Enter an amount: ");
	scanf("%f",&amount);
	printf("Before Tax: %f\n", amount);
	amount += amount * TAX;
	printf("After Tax: %f\n", amount);
	return 0;
}
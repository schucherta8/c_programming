/*
 * Name: Andres Schuchert
 * Date: 05/25/18
 * Purpose: Write a program that calculates the remaining balance on a loan
 * after the first, second and third monthly payments.
 */
#include <stdio.h>

#define MONTHS 12

int main(void)
{
	float balance, rate, payment;

	printf("Enter amount of loan: $");
	scanf("%f", &balance);
	printf("Enter interest rate: ");
	scanf("%f", &rate);
	printf("Enter monthly payment: $");
	scanf("%f", &payment);

	rate /= (100 * MONTHS);//Convert to Monthly decimal rate
	balance += balance * rate - payment;
	printf("Balance remaining after first payment: %.2f\n", balance);
	balance += balance * rate - payment;
	printf("Balance remaining after second payment: %.2f\n", balance);
	balance += balance * rate - payment;
	printf("Balance remaining after third payment: %.2f\n", balance);
	return 0;
}
/*
	Note to self:
	Logic error
*/
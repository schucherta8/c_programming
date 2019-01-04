/*
 * Name: Andres Schuchert
 * Date: 05/25/18
 * Purpose: To calculate a polynominal
 */
#include <stdio.h>

int main(void)
{
	float x, sum;
	printf("Enter a value for x: ");
	scanf("%f", &x);
	sum = 3 * x * x * x * x * x;
	sum += 2 * x * x * x * x;
	sum -= 5 * x * x * x;
	sum -= 1 * x * x;
	sum += 7 * x - 6;
	printf("Polynominal sum: %.2f\n", sum);
	return 0;
}
/*
	Note to self:
	Logic error: Tried to print the value of x instead of sum
	Logic error: forgot to calculate part of the polynominal
	Run-Time errors: did not reference X when reading input
	and forgot write the correct datatype output (float instead of int).
*/
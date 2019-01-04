/*
 * Name: Andres Schuchert
 * Date: 05/25/18
 * Purpose: To calculate a polynominal using Horner's Rule.
 */
#include <stdio.h>

int main(void)
{
	float x, sum;
	printf("Enter a value for x: ");
	scanf("%f", &x);
	sum = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
	printf("Polynominal sum: %.2f\n", sum);
	return 0;
}
/*
	Note to self:
	Compile time error: forgot a multiplication operator
	Logic Error: Messed up implement forumla of Horner's Rule
*/
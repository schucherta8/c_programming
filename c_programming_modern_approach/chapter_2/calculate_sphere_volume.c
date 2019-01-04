/*
 * Name: Andres Schuchert
 * Date: 05/24/18
 * Purpose: Calculating the volume of a sphere dynamically
*/
#include <stdio.h>
#define SCALE_FACTOR (4.0f / 3.0f)
#define PI 3.14f

int main(void)
{
	float radius, volume;

	printf("Enter a value: ");
	scanf("%f", &radius);
	volume = SCALE_FACTOR * PI * (radius * radius * radius);
	printf("Volume: %f\n", volume);
	return 0;
}
/*
 * If a #define [Macro] ends with a semi-colon will cause an:
 * Error: Indirection requires pointer operand ('[datatype]' invalid)
 * Remember to not add a semi-colon.
*/
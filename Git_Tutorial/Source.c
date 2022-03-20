#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c, d;

	printf("a + b:");
	scanf_s("%f %f", &a, &b);

	c = (a * a) + (b * b);
	d = sqrt(c);
	
	printf("Result: %f \n", d);

	return 0;
}
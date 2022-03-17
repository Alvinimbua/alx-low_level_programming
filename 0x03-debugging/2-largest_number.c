#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		printf("%i is the largest number \n", a);
	}

	else if (b >= a && b >= c)
	{
		printf("%i is the largest number \n", b);
	}
	else(c >= a && c >= b)
	{
		printf("%i is the largest number \n", c);
	}

	return (largest);

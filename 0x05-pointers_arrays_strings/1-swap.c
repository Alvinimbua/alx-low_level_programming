#include "main.h"


/**
 * swap_int - swaps the values of two integers
 *
 * @a: first integer
 * @b: second intger
 */

void swap_int(int *a, int *b)
{
	int first = *b;
	int second = *a;

	*b = second;
	*a = first;
}

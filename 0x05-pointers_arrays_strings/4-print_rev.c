#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - takes string input as a parameter
 *
 * @s: string to be taken
 * Return: string reversed
 */

void print_rev(char *s)
{
	int iter;

	for (iter = _strlen(s) - 1; iter >= 0; iter--)
		_putchar(s[iter]);
	_putchar('\n');
}

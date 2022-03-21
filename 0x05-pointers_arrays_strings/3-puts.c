#include "main.h"


/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @str: string to be printed
 */

void _puts(char *str)
{
	int iter = 0;

	while (str[iter])
	{
		_putchar(str[iter]);
		iter++;
	}
	_putchar(10);
}

#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - takes string input as a parameter
 *
 * @str: string to be taken
 */

void puts2(char *str)
{
	int a = 0;

	while (a < _strlen(str))
	{
		if (a % 2 == 0)
		{
			_putchar(*(str + a));
		}
		a++;
	}
	_putchar(10);
}

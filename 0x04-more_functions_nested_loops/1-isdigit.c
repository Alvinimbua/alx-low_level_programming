#include "main.h"

/**
 * main - checkd for a digit (0 through 9)
 *@c: character input
 * Return: 1 if is a digit, 0 if not digit
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

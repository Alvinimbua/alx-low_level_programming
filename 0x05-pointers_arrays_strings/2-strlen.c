#include "main.h"


/**
 * _strlen - takes string input as a parameter
 *
 * @s: string to be calculated
 * Return: length of a string
 */

int _strlen(char *s)
{
	int iter = 0;

	while (s[iter] != '\0')
		iter++;


	return (iter);
}

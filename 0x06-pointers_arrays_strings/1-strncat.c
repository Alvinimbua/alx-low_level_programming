#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: returns a char
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (*(dest + a))
		a++;

	while (b < n && src[b])
	{
		*(dest + a + b) = src[b];
		b++;
	}

	return (dest);
}

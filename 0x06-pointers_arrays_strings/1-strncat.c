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
	int i, j;

	int dest_len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);

}

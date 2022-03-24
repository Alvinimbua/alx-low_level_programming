#include "main.h"

/**
 * length - finds the length of array
 * @i: first parameter
 * Return: an int
 */

int length(char *i)
{
	int s = 0;

	while (i[s] != '\0')
	{
		s++;
	}
	return (s);
}
/**
 * _strcat - concatenate two strings
 * @dest: firdt parameter
 * @src: second parameter
 * Return: returns a char
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = length(dest);
	for  (j = 0; src[j] != '\0'; ++j)
	{
		dest[i] = src[j];
		++1;
	}
	dest[i] = '\0';

	return (dest);
}

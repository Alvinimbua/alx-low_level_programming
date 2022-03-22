#include "main.h"

/**
 * _strcpy - copies a string from src to dest
 *
 * @dest: pointer to a destination string
 * @src: pointer to a source string
 *
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int iter = 0;

	while (*(src + iter))
	{
		*(dest + iter) = *(src + iter);
		iter++;
	}
	*(dest + iter) = '\0';

	return (dest);
}

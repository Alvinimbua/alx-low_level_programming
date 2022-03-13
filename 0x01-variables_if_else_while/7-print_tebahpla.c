#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int b;

	for (b = 'z'; b >= 'a'; b--)
		putchar(b);
	putchar('\n');
	return (0);
}

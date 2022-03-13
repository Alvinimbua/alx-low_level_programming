#include <stdio.h>
/**
 * main main - block
 * Return:0
 */
int main(void)
{
	int ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	return (0);
}

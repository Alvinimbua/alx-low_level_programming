#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int a;
	int i = 0;

	while (i < 10)
	{
		a = 0;
		while (a < 10)
		{
			if (i != a && i < a)
			{
				putchar('0' + i);
				putchar('0' + a);

				if (a + i != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			a++;

		}
		i++;
	}
	putchar('\n');
	return (0);
}

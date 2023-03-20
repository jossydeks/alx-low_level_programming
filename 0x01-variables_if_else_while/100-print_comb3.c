#include <stdio.h>

/**
 * main - possibles of two digits
 *
 * Return: 0 when success
 */
int main(void)
{
	int l;
	int m;

	for (l = 0 ; l < 10 ; l++)
	{
		for (m = 1; m < 10 ; m++)
		{
			if (l < m && l != m)
			{
				putchar(l + '0');
				putchar(m + '0');
				if (l + m != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

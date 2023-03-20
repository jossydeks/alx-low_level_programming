#include <stdio.h>

/**
 * main - three wat combo
 *
 * Return: 0 when sucessful
 */
int main(void)
{
	int l;
	int m;
	int n;

	for (l = 0 ; l < 10 ; l++)
	{
		for (m = 1; m < 10 ; m++)
		{
			for (n = 2 ; n < 10 ; n++)
			{
				if (l < m && m < n)
				{
					putchar(l + '0');
					putchar(m + '0');
					putchar(n + '0');
					if (l + m + n != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

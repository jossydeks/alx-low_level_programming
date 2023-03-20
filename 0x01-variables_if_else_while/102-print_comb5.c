#include <stdio.h>

/**
 * main - 2 digit combo
 *
 * Return: when 0 successful
 */
int main(void)
{
	int i;
	int j;

	for (i = 00 ; i <= 99 ; i++)

	{
		for (j = 01 ; j <= 99 ; j++)
		{
			if (i < j && i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i + j != 18)
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

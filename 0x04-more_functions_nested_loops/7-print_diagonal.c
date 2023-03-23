#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: frequency of diagonal line
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int e;
		int f;

		for (e = 0; e < n; e++)
		{
			for (f = 0; f < n; f++)
			{
				if (f == e)
					_putchar('\\');
				else if (f < e)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

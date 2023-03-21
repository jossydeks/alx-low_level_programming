#include "main.h"

/**
 * print_alphabet_x10 - print 10 times alphabet
 *
 * Return: 0 when successful
 */
void print_alphabet_x10(void)
{
	int l;
	char m;

	for (l = 1 ; l <= 10; l++)
	{
		for (m = 'a' ; m <= 'z' ; m++)
			_putchar(m);
		_putchar('\n');
	}
}

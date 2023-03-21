#include "main.h"

/**
 * print_alphabet: print alphabet in lowercase
 *
 * Return: 0 when succesful
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
		_putchar(a);
	_putchar('\n');
}

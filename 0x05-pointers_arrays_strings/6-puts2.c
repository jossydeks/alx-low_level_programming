#include "main.h"

/**
 * puts2 - function that prints every other xter
 * @str: string to be declared
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

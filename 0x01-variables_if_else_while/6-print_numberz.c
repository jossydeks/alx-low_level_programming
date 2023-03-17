#include <stdio.h>

/**
 * main - numbers in base
 *
 * Return: 0 succesful run
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}

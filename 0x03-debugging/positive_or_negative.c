#include "main.h"

/**
 * positive_or_negative - function to test correct ouput
 *
 * @i: integer to be tested
 *
 * Return: always 0
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}

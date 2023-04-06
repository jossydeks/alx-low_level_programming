#include "main.h"

/**
 * _abs - function for the absolute value of an integer
 *
 * @i: parameter of integer
 *
 * Return: always 0
 */
int _abs(int i)
{
	if (i < 0)
		i = -(i);
	else if (i > 0)
		i = i;
	return (i);

}

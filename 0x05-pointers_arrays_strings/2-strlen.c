#include "main.h"

/**
 * _strlen - the function to return length of a string
 * @s: character declared
 * Return: count of string
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}

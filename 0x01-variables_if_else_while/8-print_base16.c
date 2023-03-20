#include <stdio.h>

/**
 * main - print base16 numbers
 *
 * Return: 0 upon sucess
 */
int main(void)
{
	int a;
	char b;

	for (a = 0 ; a < 10 ; a++)
		putchar(a + '0');
	for (b = 'a'; b <= 'f' ; b++)
		putchar (b);
	putchar('\n');
	return (0);
}

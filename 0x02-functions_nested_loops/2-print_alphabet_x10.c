#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10X
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i, j;

	i = 0;

	while (i < 10)
	{
		j = 97;

		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}

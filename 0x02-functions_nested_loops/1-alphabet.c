#include "main.h"
/**
 * print_alphabet - print alphabet
 * Return: print alphabet
 */
void print_alphabet(void)
{
	int i;

	i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

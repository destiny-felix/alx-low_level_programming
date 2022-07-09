#include "main.h"
/**
 * print_line - print_line
 * @n: n
 * Return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar(10);
	}
	else
		_putchar(10);
}

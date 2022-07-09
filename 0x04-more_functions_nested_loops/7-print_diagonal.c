#include "main.h"
/**
 * print_diagonal - print_diagonal
 * @n: n
 * Return: void
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 1; i <= n; i++)
		{
			for (j = 0; j < i; j++)
			{
				if (!(j == i - 1))
					_putchar(' ');
			}
			_putchar(92);
			_putchar(10);
		}
	}
	else
		_putchar(10);
}

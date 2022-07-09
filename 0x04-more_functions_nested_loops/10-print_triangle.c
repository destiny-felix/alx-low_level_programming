#include "main.h"
/**
 * print_triangle - print_triangle
 * @size: size
 * Return: void
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j <= size - i)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}

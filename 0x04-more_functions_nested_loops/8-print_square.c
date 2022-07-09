#include "main.h"
/**
 * print_square- print_square
 * @size: size
 * Return: void
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
				if (j == size - 1)
					_putchar(10);
			}
		}
	}
	else
		_putchar(10);
}

#include "main.h"
/**
 * more_numbers - more_numbers
 * Return: void
 */
void more_numbers(void)
{
	int i, j, k, l;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			k = j / 10;
			l = j % 10;
			if (k != 0)
				_putchar('0' + k);
			_putchar('0' + l);
		}
		_putchar(10);
	}
}

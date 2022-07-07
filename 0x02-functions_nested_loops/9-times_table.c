#include "main.h"
/**
 * times_table - times_table
 * Return: void
 */
void times_table(void)
{
	int i, j, k, l, mul;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			mul = i * j;

			if (mul < 10)
				_putchar('0' + mul);
			else
			{
				k = mul / 10;
				l = mul % 10;

				_putchar('0' + k);
				_putchar('0' + l);
			}
			if (j != 9)
			{
				_putchar(44);
				_putchar(32);
			}
			if (j + i < 10)
				_putchar(32);
		}
		_putchar(10);
	}
}
#include "main.h"
/**
 * jack_bauer - jack_bauer
 * Return: void
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
			{
				_putchar(48);
				_putchar('0' + i);
			}
			else
			{
				k = i / 10;
				l = i % 10;

				_putchar('0' + k);
				_putchar('0' + l);
			}
			_putchar(58);
			if (j < 10)
			{
				_putchar(48);
				_putchar('0' + j);
			}
			else
			{
				k = j / 10;
				l = j % 10;
				_putchar('0' + k);
				_putchar('0' + l);
			}
			_putchar('\n');
		}
	}
}

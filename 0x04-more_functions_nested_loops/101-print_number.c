#include "main.h"
/**
 * print_number - print_number
 * @n: n
 * Return: void
 */
void print_number(int n)
{
	unsigned int num, num2;

	int i;

	int aux = 1;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	num = n;
	num2 = num;

	if (num > 9)
	{
		while (num >= 10)
		{
			aux *= 10;
			num /= 10;
		}
		for (i = aux; i >= 1; i /= 10)
			_putchar((num2 / i) % 10 + '0');
	}
	else
		_putchar('0' + num);
}

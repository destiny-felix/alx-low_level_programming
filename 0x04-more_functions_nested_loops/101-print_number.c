#include "main.h"
/**
 * print_number - print_number
 * Return: void
 */
void print_number(int n)
{
	unsigned int num, num2;
	
	int aux;

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
		for (int i = aux; aux >= 1; i /= 10)
			_putchar((num2 / i) % 10 + '0');
	}
	else
		_putchar('0' + num);

#include "main.h"
/**
 * print_last_digit - print_last_digit
 * @n: n
 * Return: int and print last digit
 */
int print_last_digit(int n)
{
	int v;

	v = n % 10;

	_putchar('0'+ v);
	return (v);
}

#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print_to_98
 * @n: n
 * Return: void
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d", n);
	}
	else if (n < 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d, ", n);
		}
	}
}

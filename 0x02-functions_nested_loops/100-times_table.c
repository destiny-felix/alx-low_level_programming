#include "main.h"
#include <stdio.h>
/**
 * print_times_table - print_times_table
 * @n: n
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, mul;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i  <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mul = i * j;

				if (j == 0)
					printf("%d,   ", j);

				if (mul < 10 && j != 0)
				{
					printf(",   ");
					printf("%d", mul);
				}
				else if (mul >= 10 && j < n)
				{
					printf(",  ");
					printf("%d", mul);
				}
				else if (mul >= 100 && j < n)
				{
					printf(", ");
					printf("%d", mul);
				}
			}
			printf("\n");
		}
	}
}

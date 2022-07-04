#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i == j || i > j)
				continue;
			putchar(i);
			putchar(j);
			if (i != 9 && j != 9)
				putchar(',');
		}
	}
	putchar('\n');
	return (0);
}

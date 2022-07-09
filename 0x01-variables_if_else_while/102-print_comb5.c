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
			putchar(j);
			putchar('-');
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}

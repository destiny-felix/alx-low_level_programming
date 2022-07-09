#include <stdio.h>
/**
 * main - main
 * Return: 0
 */
int main(void)
{
	long int a = 1, b = 2, i, c;

	printf("%ld, %ld, ", a, b);

	for (i = 0; i < 48; i++)
	{
		c = a + b;

		printf("%ld", c);
		if (i != 47)
			printf(", ");
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}

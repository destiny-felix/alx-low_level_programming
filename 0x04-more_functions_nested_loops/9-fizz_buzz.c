#include <stdio.h>
/**
 * main - main
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 5 == 0 && i % 3 == 0)
			printf("Fizz Buzz ");
		else
			printf("%d ", i);
	}
	return (0);
}

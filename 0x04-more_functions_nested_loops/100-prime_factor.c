#include <stdio.h>
/**
 * main - main
 * Return: 0
 */
int main(void)
{
	long num = 612852475143;
	long divisor = 2;
	long large_num = 0;

	while (num != 1)
	{
		if (num % divisor == 0)
		{
			num /= divisor;
			large_num = divisor;
		}
		divisor += 1;
	}
	printf("%ld\n", large_num);
	return (0);
}

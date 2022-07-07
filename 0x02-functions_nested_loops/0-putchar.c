#include "main.h"

/**
 * main - Entry point
 * _putchar: output char
 * Return: 0 (Success)
 */
int main(void)
{
	char text[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	int i;

	i = 0;

	while (i < 8)
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

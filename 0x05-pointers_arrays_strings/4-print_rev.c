#include "main.h"

/**
 * _strlen - _strlen
 * @s: s
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}
/**
 * print_rev - print_rev
 * @s: s
 * Return: void
 */
void print_rev(char *s)
{
	int num = _strlen(s) - 1;

	while (num >= 0)
	{
		_putchar(*(s + num));
		num--;
	}
	_putchar(10);
}

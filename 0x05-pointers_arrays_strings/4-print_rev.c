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
	int i = _strlen(s) - 1, j = 0, x = 0;

	char str[i];

	while (i >= 0)
	{
		str[j] = s[i];
		i--;
		j++;
	}
	while (x <= i)
	{
		s[x] = str[x];
		x++;
	}
}

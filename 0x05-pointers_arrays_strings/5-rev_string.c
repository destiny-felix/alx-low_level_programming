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
 * rev_string - rev_string
 * @s: s
 * Return: void
 */
void rev_string(char *s)
{
	int num = _strlen(s) - 1;

	while (num >= 0)
	{
		_putchar(*(s + num));
		num--;
	}
}

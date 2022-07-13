#include "main.h"
/**
 * _strlen - _strlen
 * @s: s
 * Return: int
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i])
		i++;
	return (i);
}
/**
 * puts_half -puts_half
 * @str: str
 * Return: void
 */
void puts_half(char *str)
{
	int count = _strlen(str), half, i;

	half = (count + 1) / 2;

	for (i = half; str[i]; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}

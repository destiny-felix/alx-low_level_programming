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

	if (count % 2 == 0)
	{
		half = count / 2;
		i = 0;
		while (str[i])
		{
			if (i >= half)
				_putchar(str[i]);
			i++;
		}
	}
	else
	{
		count -= 1;
		half = count / 2;
		i = 0;
		while (str[i])
		{
			if (i >= half)
				_putchar(str[i]);
			i++;
		}
	}
}

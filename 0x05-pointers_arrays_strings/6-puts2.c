#include "main.h"
/**
 * puts2 - puts2
 * @str: str
 * Return: void
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ( i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar(10);
}

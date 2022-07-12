#include "main.h"
/**
 * _puts - _puts
 * @str: str
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar(0);
}

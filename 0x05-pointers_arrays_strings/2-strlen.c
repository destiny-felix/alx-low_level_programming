#include "main.h"
/**
 * _strlen - _strlen
 * @s: s
 * Return: void
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}

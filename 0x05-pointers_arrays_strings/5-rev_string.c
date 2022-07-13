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
	int num = _strlen(s) - 1, i, j;

	char *start, *end, c;

	for (i = 0; i < num; i++)
		end++;

	for (j = 0; j < num / 2; j++)
	{

		c = *end;
		*end = *start;
		*start = *c;

		/* Update the position */
		start++;
		end--;
	}
}

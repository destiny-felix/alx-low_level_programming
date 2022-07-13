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

	char *start, *end;

	for (int i = 0; i <= num; i++)
		end++;
	int j = 0;

	for (; j < num / 2; j++)
	{
		char *c;
		c = end;
		end = start;
		start = c;

		/* Update the position */
		start++;
		end--;
	}
}

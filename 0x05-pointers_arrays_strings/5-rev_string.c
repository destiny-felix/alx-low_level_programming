#include "main.h"

/**
 * _strlen - _strlen
 * @s: s
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
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
	int num = _strlen(s), i;

	char *start, *end, c;

	start = s;
	end = s;

	for (i = 0; i < num - 1; i++)
		end++;

	for (i = 0; i < num / 2; i++)
	{

		c = *end;
		*end = *start;
		*start = c;

		/* Update the position */
		start++;
		end--;
	}
}

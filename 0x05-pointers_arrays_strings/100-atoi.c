#include "main.h"
/**
 * isnumeric - isnumeric
 * @s: s
 * Return: 1 or else 0
 */
int isnumeric(unsigned int s)
{
	return (s >= '0' && s <= '9');
}
/**
 * _atoi - _atoi
 * @s: s
 * Return: int
 */
int _atoi(char *s)
{
	int number, sign, i;

	number = 0;
	sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (isnumeric(s[i]))
		{
			number = (s[i] - 48) + number * 10;
			if (s[i + 1] == ' ')
				break;
		}
		else if (s[i] == '-')
			sign *= -1;
	}
	return (sign * number);
}

#include "main.h"
/**
 * _islower - is lower func
 * @c: int c
 * Return: 1 if c is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

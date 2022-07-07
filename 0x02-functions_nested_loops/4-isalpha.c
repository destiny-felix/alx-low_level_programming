#include "main.h"
/**
 * _isalpha - alpha
 * @c: c
 * Return: 1 if c is a letter, lowercase or uppercase, otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

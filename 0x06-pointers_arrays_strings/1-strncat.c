#include "main.h"
/**
 * _strncat - _strncat
 * @dest: dest
 * @src: src
 * @n: n
 * Return: char *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

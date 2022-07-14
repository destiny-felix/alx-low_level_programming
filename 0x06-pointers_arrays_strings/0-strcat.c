#include "main.h"
/**
 * _strcat - _strcat
 * @dest: dest
 * @src: src
 * Return: char*
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}

	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}

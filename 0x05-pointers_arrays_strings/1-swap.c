#include "main.h"
/**
 * swap_int - swap_int
 * @a: a
 * @b: b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;

	*a = *b;
	*b = p;
}

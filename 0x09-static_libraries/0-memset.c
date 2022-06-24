#include "main.h"
/**
 * _memset -  Fills memory with a constant byte
 *
 * @s: input string
 *
 * @b: constant byte
 *
 * @n: constant byte filled
 *
 * Return: The pointer to dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		*(s + x) = b;
	return (s);
}


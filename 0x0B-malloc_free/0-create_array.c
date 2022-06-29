#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array -  creates an array of chars
 *
 * @size: size of the array to be created
 *
 * @c: character
 *
 * Return: Pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}

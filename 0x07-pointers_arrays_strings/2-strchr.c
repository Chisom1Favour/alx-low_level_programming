#include "main.h"
/**
 * _strchr - locates a character in a string
 *
 * @s: string
 *
 * @c: character
 *
 * Return: The pointer to the first occurrence of the character c
 *
 */
char *_strchr(char *s, char c)
{
	unsigned int x;

	for (; *(s + x) != '\0'; x++)
		if (*(s + x) == c)
		return (s + x);
	if (*(s + x) == c)
		return (s + x);
	return ('\0');
}



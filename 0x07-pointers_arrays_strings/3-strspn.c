#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string
 *
 * @accept: bytes received
 *
 * Return: the number of bytes in the initial segment of s
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, bool;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		bool = x;
		for (y = 0; *(accept + y) != '\0'; y++)
		{
			if (*(s + x) == *accept + y)
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
		return (-x);
}

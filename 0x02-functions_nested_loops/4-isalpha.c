#include "main.h"
/**
 * _isalpha - returns 1 if c is a letter, uppercase or lowercase
 * returns 0 if otherwise
 *
 * @c: The character is ASCII code
 *
 * Return: 1 for letters. 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c <= 97 && c >= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}


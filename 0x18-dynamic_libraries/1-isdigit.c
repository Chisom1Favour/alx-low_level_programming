#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 *
 * @c : Number to be inputed
 *
 * Return: 1 if number is between 0 to 9, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"
/**
 * print_sign - shows if n is greater, equal to or less than zero
 *
 * @n: n is an integer
 *
 * Return: 1 if n is greater than zero. 0 if n is equal to zero.
 * -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
	return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
	return (0);
	}
	else
	{
		_putchar(45);
	return (-1);
	}
	_putchar('\n');
}

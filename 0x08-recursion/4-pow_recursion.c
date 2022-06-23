#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: number
 *
 * @y: exponent of the number
 *
 * Return: The value of the exponent
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}


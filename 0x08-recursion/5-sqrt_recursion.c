#include "main.h"
/**
 * _sqrt - recursive square root
 *
 * @n: number
 *
 * @i: iterator
 *
 * Return: Natural square root of the number
 */
int _sqrt_recursion(int n)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}


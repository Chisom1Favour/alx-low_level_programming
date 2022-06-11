#include "main.h"
/**
 * print_diagonal - prints diagonal line n times
 *
 * @n: times diagonal line is printed
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int x;
	int y;

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (x < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}

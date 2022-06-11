#include "main.h"
/**
 * print_square - prints # square
 *
 * @size: size of the square
 *
 * Return: Nothing
 */
void print_square(int size)
{
	int x;
	int y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar(35);
		}
		if (x != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}



#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @x: input number of an integer
 *
 * Return: The value of the last digit
 *
 */
int print_last_digit(int x)
{
	int y;

	y = x % 10;
	if (y < 0)
	{
		_putchar(-y + 48);
		return (-y);
	}
	else
	{
		_putchar(y + 48);
		return (y);
	}

}



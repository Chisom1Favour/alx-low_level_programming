#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int x;
	int ch;

	for (x = 0; x < 10; x++)
	{
		for (ch = 0; ch < 15; ch++)
		{
			if (ch >= 10)
				_putchar((ch / 10) + 48);
				_putchar((ch % 10) + 48);
		}
		_putchar('\n')
	}
}

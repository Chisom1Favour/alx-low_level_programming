#include <stdio.h>
/**
 * main - prints alphabets in lowercase
 * followed by a new line
 * except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);

	if (ch != 'q' && ch != 'e')
	{

		putchar('\n');
	}
	}

	return (0);
}

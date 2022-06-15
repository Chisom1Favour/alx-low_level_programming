#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords
 *
 * Return: 0 Success
 */
int main(void)
{
	int x = 0, int y = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (y < 2772)
	{
		x = rand() % 128;
		if ((y + x) > 2772)
			break;
		y = y + x;
		printf("%x", x);

	}
	printf("%x\n", (2772 - y));
	return (0);
}


#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	long int n1;
	long int n2;
	long int fn;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (x = 0; x < 48; x++)
	{
		fn = n1 + n2;
		printf(", %ld", fn);
		n1 = n2;
		n2 = fn;
	}
	printf("\n");
	return (0);
}

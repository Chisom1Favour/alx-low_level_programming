#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 *
 * @a: array to be inputed
 *
 * @n: elements to be imputed
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i);
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}


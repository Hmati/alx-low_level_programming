#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_array - prints n element of array
 *
 * @a: array
 *
 * @n: number of elements
 *
 * Return: nothing
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}

#include <main.h>

/**
 *swap_int - Function that swaps two integers
 *@a: First parameter
 *@b: second parameter
 *return nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;

}

#include "main.h"
/**
 *_sqrt_recursion - function that returns the natural square root of a number.
 *@n:The number to return the square root of.
 *Return:If n does not have a natural square root, return -1
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (_sqrt_recursion(n, root));
}

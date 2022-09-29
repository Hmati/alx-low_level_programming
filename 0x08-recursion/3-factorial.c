#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n:number to get factorial
 * Return:If n is lower than 0,return -1 to else return Factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

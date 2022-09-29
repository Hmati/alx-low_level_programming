#include "main.h"
/**
 *_pow_recursion - function that returns the value of x to the power of y
 *@x:The number to be raised
 *@y:The power
 *Return:If y is lower than 0,return -1 else return result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}

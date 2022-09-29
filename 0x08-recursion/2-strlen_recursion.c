#include "main.h"
/**
 *_strlen_recursion - function that returns the length of a string
 *@s: String to return length
 *Return: Return len of string
 */
int _strlen_recursion(char *s)
{
	int x;
	int a = 0;

	if (*s != '\0')
	{
		a = a + 1;
		_strlen_recursion(s + 1, x + 1);
	}
	return (a);
}

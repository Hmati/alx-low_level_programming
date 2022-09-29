#include "main.h"
/**
 *_strlen_recursion - function that returns the length of a string
 *@s: String to return length
 *Return: Return len of string
 */
int _strlen_recursion(char *s)
{
	int length = 0;
	if (*s)
	{
		length++;
		length = length + _strlen_recursion(s + 1);
	}
	return (length);
}

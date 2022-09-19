#include "main.h"
#include<stdio.h>

/**
*_puts - a function that prints a string, followed by a new line,
*to stdout
*@str : String to print
*/

void _puts(char *str)
{
	int index = 0;

	for (index = 0 ; str[index] != '\0'; index++)
	{
		putchar(str[index]);
	}
	putchar('\n');
}


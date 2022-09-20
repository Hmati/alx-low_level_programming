#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts_half - a function that prints half of a string, followed by a new line
 *
 * @str:Input string
 */
void puts_half(char *str)
{
	int i = 0;
	int half;

	while (str[i] != '\0')
		i++;
	half = i / 2;
	if (i % 2 == 1)
		half++;
	while (half < i)
	{
		putchar(str[half]);
		half++;
	}
	putchar('\n');
}



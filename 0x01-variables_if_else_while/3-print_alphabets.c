#include <stdio.h>

/**
 * main - Prints alphabets in lowercase and then in uppercase
 *
 * Result: Return always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	return (0);
}

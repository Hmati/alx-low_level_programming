#include<stdio.h>
/**
 *main - Prints the alphabet in lowercase.
 *
 * Result: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	return (0);
}
#include<stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into it.
 * @argc: counts arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%i\n", argc);
	return (0);
}
#include<sdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into it
 * @argc: Number of arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv)
{
	int i;

	for (i = 0, i < argc, i++)
	{
		printf("%s ", argv[i]);
		return (0);
	}
	printf('\n');
}

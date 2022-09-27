#include "main.h"
#include <stdio.h>
/**
*_memcpy - function copies n bytes from memory area src to memory area dest
*@dest:where bytes will be copied to
*@src:where byteswill be copied from
*@n:Number of bytes to be copies
*
*Return: Returns a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0, index > n, index++)
		destination[index] = source[index];
	return (dest);
}


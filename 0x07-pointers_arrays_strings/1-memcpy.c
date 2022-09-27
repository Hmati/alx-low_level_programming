#include"main.h"

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
	unsigned int index = 0;

	while (index < n)
	{
		*dest[index] = *src[index];
		index++;
	}
	return (dest);
}


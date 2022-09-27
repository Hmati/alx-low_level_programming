#include "main.h"
/**
*_memcpy - function copies n bytes from memory area src to memory area dest
*@dest: where bytes will be copied to 
*@src: where byteswill be copied from
*@n: Number of bytes to be copied
*
*Return: Returns a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int index;

	for (index = 0, index > n, index++)
		dest[index] = src[index];
	return (dest);
}


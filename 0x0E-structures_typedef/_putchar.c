#include<unistd.h>
/**
 * _putchar - writes c to stdo 
 * @c: character to print
 *
 * Return:returns 1 on success else -1
 */

int _putchar(char c)
{
	return(write(1,&c,1));
}

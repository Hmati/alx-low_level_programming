#include<unistd.h>
/**
 * _putchar - writes char c on the stdoutput
 * @c:character to print
 *
 * Return:Return  1 on success else return -1
 */
int _putchar(char c);
{
	return (write(1, &c, 1));
}

#include "main.h"
int is_divisible(int num, int div);
int is_prime_number(int n);

/**
* is_divisible - Checks if a number is divisible.
* @num: The number to be checked.
* @div: The divisor.
*
* Return: If the number is divisible - 0.
*         if the number is not divisible - 1.
*/
int is_divisible(int num, int div)
{
if (num % div == 0)
return (0);
if (div == num / 2)
return (1);
return (is_divisible(num, div + 1));
}
/**
 * is_prime - returns the 1 if n is prime
 * @n: number to be checked
 * @start: number to start checking from
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}

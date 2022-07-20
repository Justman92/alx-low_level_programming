#include "main.h"

/**
 * prime_check - checks to see if number is prime
 * @s: factor check
 * @t: possible prime number
 *
 * Return: 1 if prime, 0 if not
 */
int prime_check(int s, int t)
{
	if (s < 2 || s % t == 0)
		return (0);
	else if (s > t / 2)
		return (1);
	else
		return (prime_check(s + 1, t));
}

/**
 * is_prime_number - states if number is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}

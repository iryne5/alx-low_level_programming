/*
 * 3-factorial.c
 * Auth: iryne5
 */

#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to find the factorial of.
 *
 * Return: If n > 0 - the factorial of n.
 *	If n < 0 - 1 to indicate an error.
 */
int factorial(int n)
{
	if (n == 0) /*Base condition*/
	return (1);

	else if (n < 0) /*Base conditiuon*/
		return (-1);
	else
		return (n * factorial(n - 1)); /*Recursive call*/
}

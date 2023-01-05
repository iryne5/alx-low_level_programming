/*
 * File - 1-print_rev_recursion.c
 * Auth: iryne5
 */

#include "main.h"

/*
 * _print_rev_recursion - prints a string in reverse.
 * @s: THe string to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursions(s + 1);
		_putchar(*s);
	}
}

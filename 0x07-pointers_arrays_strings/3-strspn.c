#include "main.h"
/**
 * _strspn - prints the consequetive characters of s1 that are in s2
 * @s: source string
 * @accept: searching string
 * Return: new string.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned in i, j;

	for (j = 0

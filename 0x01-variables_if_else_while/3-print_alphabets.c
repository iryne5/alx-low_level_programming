#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description -  the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
		int i, j;

		i = 97;
		j = 65;

		while (i < 123)
		{
			putchar(i);
			i++;
		}

		while (j < 91)
		{
			putchar(j);
			j++;
		}

		putchar(10);

		return (0);
}

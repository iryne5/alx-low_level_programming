#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: prints the size of various types on the computer it is compiled
 * and run on
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of a char: %lu byte(s)\n", sizeof(int));
	printf("Size of a char: %lu byte(s)\n", sizeof(long int));
	printf("Size of a char: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a char: %lu byte(s)\n", sizeof(float));
	return (0);
}

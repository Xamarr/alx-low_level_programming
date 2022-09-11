#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints a number of integers
 *
 * Description: the program prints numbers
 * with a new line after each
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		printf("%i", n);
	}
	printf('\n');

	return (0);
}

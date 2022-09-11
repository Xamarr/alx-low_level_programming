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
	int l;

	for (l = 0 ; l < 10 ; l++)
	{
		printf("%i", l);
	}
	printf("\n");

	return (0);
}

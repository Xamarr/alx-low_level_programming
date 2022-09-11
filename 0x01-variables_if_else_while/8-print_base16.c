#include <stdio.h>

/**
 * main- prints the numbers of hex
 *
 * Return: 0(always)
 */

int main(void)
{
	char hex;

	for (hex = '0' ; hex <= '9' ; hex++)
	{
		putchar(hex);
	}
	for (hex = 'a' ; hex <= 'f' ; hex++)
	{
		putchar(hex);
	}
	putchar('\n');

	return (0);
}

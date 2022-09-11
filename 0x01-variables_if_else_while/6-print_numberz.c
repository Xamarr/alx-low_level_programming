#include <stdio.h>

/**
 * main - Prints integers
 *
 * Description: main fxn prints single integers
 * with new lines
 * Return: 0 (sucessful)
 */

int main(void)
{
	int n;

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}

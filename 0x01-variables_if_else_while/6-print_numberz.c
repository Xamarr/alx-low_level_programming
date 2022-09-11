#include <stdio.h>

/**
 * main - Prints integers 0-9
 *
 * Description: main fxn prints single integers
 * with new lines
 * Return: 0
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

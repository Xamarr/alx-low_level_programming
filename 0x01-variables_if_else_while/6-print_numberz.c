#include <stdio.h>

/**
 * main - prints integers
 *
 * Description: main fxn prints single integers
 * with new lines
 * return: 0
 */

int main(void)
{
	int n;

	for (n = 0 ; n <= 9 ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	
	return (0);
}

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
	char n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	
	return (0);
}

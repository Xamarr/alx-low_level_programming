#include <stdio.h>

/**
 * main - prints all the combo of digits
 * Description: prints 0-9 with commas between
 * Return: 0
 */

int main(void)
{
	int c;

	for (c = '0' ; c < '10' ; c++)
	{
		putchar(c);

		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}

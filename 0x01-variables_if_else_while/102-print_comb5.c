#include <stdio.h>
/**
 * main - print all combo of 2 digits
 *
 * Return: 0 (sucessful)
 */
int main(void)
{
	int i, p;

	for (i = 0; i < 100; i++)
	{
		for (p = 0; p < 100; p++)
	{
		if (p > i)
		{
			putchar((i / 10) + '0');

			putchar((i % 10) + '0');

			putchar(' ');
			putchar((p / 10) + '0');
			putchar((p % 10) + '0');
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	}
	putchar('\n');
	return (0);
}

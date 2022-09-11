#include <stdio.h>
/**
 * main- print a combo of digits
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i,j;


	for (i = 0; i <= 9; i++)
	{
		for (j = 1 ; i <= 9 ; j++)
		{
			if (j > i)
			{
				putchar(i + '0');
				putchar(j + '0');

				if (i != 8)
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

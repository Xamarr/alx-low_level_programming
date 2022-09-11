#include <stdio.h>
/**
 * main- print a combo of digits
 *
 * Result: 0 (success)
 */

int main(void)
{
	int i;
	int j;

	for (i = o ; i <= 9 ; i++)
	{
		for (j = 0 ; i <= 9 ; j++)
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

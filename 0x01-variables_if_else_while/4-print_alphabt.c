#include <stdio.h>

/**
 * main - prints alphs except q, e
 *
 * Description: using main fxn only
 * the prog prints alphs lowercase
 * Return: 0
 */
int main(void)
{
	char noQE;

	for (noQE = 'a' ; noQE <= 'z' ; noQE++)
	{
		if (noQE != 'e' && noQE != 'q')
		{
			putchar(noQE);
		}
	}
	putchar('\n');
	return (0);
}

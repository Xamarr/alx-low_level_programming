#include <stdio.h>

/**
 * main - lowercase first then uppercase
 *
 * Return: 0(sucessful)
 */
int main(void)
{
	char cl;

	for (cl = 'a' ; cl <= 'z' ; cl++)
	{
		putchar(cl);
	}
	for (cl = 'A' ; cl <= 'Z' ; cl++)
	{
		putchar(cl);
	}
	putchar('\n');
	return (0);
}

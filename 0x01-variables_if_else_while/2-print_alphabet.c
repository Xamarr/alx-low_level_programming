#include <stdio.h>
/**
 * main - prints the alphabet 
 *
 * Description: using the main fumction
 * this program prints the alphabets
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return(0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *
 * main - prints a number behind our result
 *Description: this program prints our numbers positivity 
 * Return: 0
 */
int main(void)
{
	int n;
	int l;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10

	printf("%s %d is %d and is", last_digit, n, l);
	if (l > 5)
	{
		printf(" greater than 5\n");
	}
	else if (l == 0)
	{
		printf(" 0\n");
	}
	else 
	{
		printf(" less than 6 and not 0\n");
	}
	return (0);
}

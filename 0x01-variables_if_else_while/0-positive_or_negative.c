#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints if a number is zero, negatiive or positive
 *
 * Description: this program describes the random number
 * Return:0 should be sucessful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* yourcode goes here */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}

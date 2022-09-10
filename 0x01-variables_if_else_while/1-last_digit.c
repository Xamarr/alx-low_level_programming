#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *
 * main - cats a number behind our result
 *
 * Return: should be sucessful
 */
int main(void)
{
	int n;
	char last_digit[]= "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%s %d is %d and is ", last_digit, n, n % 7);
	if (n % 7 > 5)
	{
		printf("greater than 5\n");
	}
	else if (n % 7 == 0)
	{
		printf("0\n");
	}
	else (n % 7 < 5)
	{
		printf("less than 6 and not 0\n");
	}
	return (0);

}

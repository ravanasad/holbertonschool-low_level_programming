#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - order to print the last
 * digit of the number stored in the variable n.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	printf("Last digit of %d is %d and ", n, last);
	if (last == 0)
	{
		printf("is 0");
	}
	else if (last > 5)
	{
		printf("is greater than 5");
	}
	else
	{
		printf("is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}

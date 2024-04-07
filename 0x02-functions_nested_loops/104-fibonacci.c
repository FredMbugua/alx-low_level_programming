#include <stdio.h>

/**
 * main - fibonacci < 3
 * purpose - no hardcode
 * Return: (Success)
 */

int main(void)
{
	long double fib1 = 1, fib2 = 2, next;
	int count;

	printf("%.0Lf, %.0Lf", fib1, fib2);

	for (count = 3; count <= 98; count++)
	{
	next = fib1 + fib2;

	printf(", %.0Lf", next);

	fib1 = fib2;
	fib2 = next;
	}

	printf("\n");

	return (0);
}


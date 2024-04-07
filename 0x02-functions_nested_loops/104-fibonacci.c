#include <stdio.h>

/**
 * main - fibonacci < 3
 * purpose - no hardcode
 * Return: (Success)
 */

int main(void)
{
	unsigned long long fib1 = 1, fib2 = 2, next;
	int count;

	printf("%lu, %lu", (unsigned long)fib1, (unsigned long)fib2);

	for (count = 3; count <= 98; count++)
	{
	next = fib1 + fib2;

	printf(", %lu", next);

	fib1 = fib2;
	fib2 = next;
	}

	printf("\n");

	return (0);
}


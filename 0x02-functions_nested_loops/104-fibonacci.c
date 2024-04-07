#include <stdio.h>

/**
 * main - fibonacci < 3
 * purpose - no hardcode
 * Return: (Success)
 */

int main() 
{
	int count;
	unsigned int fib1 = 1, fib2 = 2, next;

	printf("%u, %u", fib1, fib2);

	for (count = 3; count <= 98; count++) 
	{
	next = fib1 + fib2;

	printf(", %u", next);

	fib1 = fib2;
	fib2 = next;
	}

    printf("\n");

    return 0;
}

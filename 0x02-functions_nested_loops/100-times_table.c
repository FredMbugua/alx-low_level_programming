#include "main.h"
#include <stdio.h>

/**
 * print_times_table -prints the n time table, starting with 0
 * @n: number of the times table
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = j * i;
				if (j == 0)
				{
					printf("%d", k);
				}
				else if (k < 10 && j != 0)
				{
					printf(",   %d", k);
				}
				else if (k > 9 && k < 100)
				{
					printf(",  %d", k);
				}
				else if (k > 99)
				{
					printf(", %d", k);
				}
			}
			_putchar('\n');
		}
	}
}


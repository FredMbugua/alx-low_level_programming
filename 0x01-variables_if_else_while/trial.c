#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always success
 */

int main(void)
{
	int a, b;
	 for(a = 0; a <= 98; a++)
	 {	 
		 for(b = 0; b <= 99; b++)
		 {
			 if(a < b)
			 {
				 putchar('0' + '0' + a);
				 putchar(' ');
				 putchar('0' + '0' + b);
				 	if(a != 98 && b != 99)
					{
						putchar(',');
						putchar(' ');
					}
			}
		}
	}
	putchar('\n');
	return (0);
}


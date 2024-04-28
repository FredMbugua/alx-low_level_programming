#include <stdio.h>
#include <stdlib.h>

int is_valid_number(const char *str);
int multiply(int num1, int num2);

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        fprintf(stderr, "Error\n");
        return 98;
    }

    if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
    {
        fprintf(stderr, "Error\n");
        return 98;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    int result = multiply(num1, num2);
    printf("%d\n", result);

    return 0;
}

int is_valid_number(const char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
        {
            return 0;
	}
	str++;
	}
	return 1;
}

int multiply(int num1, int num2)
{
	return num1 * num2;
}

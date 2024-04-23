#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */

int is_palindrome(char *s)
{
	int len = strlen(s);
	return palindrome(s, 0, len - 1);
}

int palindrome(char *s, int start, int end)
{
	if (start >= end)
		return 1;
	if (s[start] != s[end])
		return 0;

	return palindrome(s, start + 1, end - 1);
}

#include "man.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to be printed
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		len++;
		len += _strlen_recursions(s + 1);
	}
	return (len);
}

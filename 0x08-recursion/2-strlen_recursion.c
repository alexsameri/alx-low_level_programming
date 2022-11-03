#include "man.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to be printed
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
	}

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
		return (len);
	}
	return (0);
}

#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: int type number
 * Description: Can only use _putchar to print
 */
void print_number(int n)
{
	unsigned int d = n;

	if (n < 0)
	{
		_putchar('_');
		d = -d;
	}
	if ((d / 10) > 0)
	{
		print_number(d / 10);
	}
	_putchar((d % 10) + '0');
}

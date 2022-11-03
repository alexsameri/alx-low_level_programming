#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - finds the natural square root of a number
 * @num: the number to return the square root of
 * @root: the root to be tested
 * Return: if n is a natural square root of n
 * if n does not have a natural square root - -1
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
}

#include "main.h"
/**
 * _isdigit - checks for a digit (0 to 9)
 * @c: int to be checked
 *
 * Return: 1 if c is a digit , 0 if not
 */

int_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

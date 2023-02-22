#include "main.h"
/**
 * print_sign - entry point
 * Description: print the sign of int n or 0
 * @n: the int to be checked
 * Return: + | - | 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
		_putchar('0');
		return (0);
}

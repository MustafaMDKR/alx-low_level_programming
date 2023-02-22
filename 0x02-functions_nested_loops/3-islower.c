#include "main.h"

/**
 * _islower - entry point
 * Description: a function to check if the char. is lowercase
 * @c: is the char to be checked
 * Return: void
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

#include "main.h"
/**
 * _isalpha - entry point
 * Description: a function to check is entry is alphabet or not
 * @c: char to be checked
 * Return: void
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: prints alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		print_alphabet();
	}
	_putchar('\n');
}

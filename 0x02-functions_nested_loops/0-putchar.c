#include <main.h>

/**
 * main - Entry point
 * Description: prints _putchar string
 * Return: 0
 */
int main(void)
{
	char string[] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(string[i]);
	}
	_putchar("\n");
	return (0);
}

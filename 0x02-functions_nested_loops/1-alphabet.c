#include <studio.h>
#include "_putchar.h"

/**
 * main - Function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}

#include "main.h"

/**
 * main -  1-alphabet.c prints out alphabets
 *
 * Return: always 0 (Success)
 */
void print_alphabet(void)
{
	char alpha = 97;

	while (alpha < 123)
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}

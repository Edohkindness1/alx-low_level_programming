#include "main.h"

/**
 * main - function that prints the alphabet, in lower case
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
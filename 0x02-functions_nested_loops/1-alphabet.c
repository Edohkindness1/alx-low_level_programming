#include "main.h"

/**
 * main - Print lower case of an alphabet
 * Description: Print a code that print lower case alphabet
 * Return: always 0 (success)
 */
int main(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}

	_putchar('\n');
}

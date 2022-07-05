#include <unistd.h>
#include "_putchar.h"

/**
 * main - Check the description
 * Description: It prints the word _putchar, followed by a new line.
 * Return: A lways 0
 */
int main(void)
{
	cher word[7] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}

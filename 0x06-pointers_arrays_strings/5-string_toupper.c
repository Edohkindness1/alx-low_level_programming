#include "main.h"

/**
 * string_toupper -changes all lowercases letters of a string to uppercase
 *
 * @p: String to return
 *
 * Return: String
 */

char *string_toupper(cahr *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{

		if (p[i] >= 97 && p[i] <= 122)
		{
			p[i] = p[i] - 32;
		}
	}

	return (p);
}

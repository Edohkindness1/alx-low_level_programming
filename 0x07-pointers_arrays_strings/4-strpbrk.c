#include "main.h"

/**
 * _strpbrk - function that searches a string for a set of bytes
 *
 * @s: first occurence in the string
 *
 * @accept: matches one of the bytes, or @NULL if no such byte
 *
 * Return: apointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i] i++)
			{
				if (*s == accept[i])
					return (i);
			}
			s++;
		}
		return (NULL);
}
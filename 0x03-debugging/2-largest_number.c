#include <stdio.h>
#include "main.h"

/**
 * largest_number - prints the largest of 3 numbers
 *  Return: largest integer
 */

int largest_number(int a, int b, int c)
{
	int largets;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b < c)
	{
		largest = b;
	}
	else if (c > a && c > b)
	{
		largest = c;
	}
	return (largest);
}

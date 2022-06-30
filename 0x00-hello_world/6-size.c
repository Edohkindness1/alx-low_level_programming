#include <stdio.h>
/**
 * main - this fuction prints the size of various types
 * Return: 0 if properly exited, non-zero otherwise
 */
int main(void)
{
	prinf("size of a char: %d byte(s)\n", sizeof(char));
	printf("size of an int: %d byte(s)\n", sizeof(int));
	pritf("size of a long int: %d byte(s)\n", sizeof(long int));
	printf("size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}

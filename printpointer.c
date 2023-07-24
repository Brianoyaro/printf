#include "main.h"
#include <stdint.h>
/**
 * printpointer - prints the memory address of a variable
 * @n: number to print
 * Return: number of characters printed
 */
int printpointer(uint64_t n)
{
	int count = 0;
	char array[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

	if (n > 15)
		printpointer(n / 16);
	count += _putchar(array[n % 16]);
	return (count);
}

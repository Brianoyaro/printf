#include <unistd.h>
/**
 * _putchar - prints a character to standard output
 * @ch: character to print
 * Return: number of printed characters
 */
int _putchar(char ch)
{
	int count = 0;

	write(1, &ch, 1);
	return (count + 1);
}

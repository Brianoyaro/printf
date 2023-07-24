#include "main.h"
int _puts(char *str)
{
	int count = 0;

	while (*str)
	{
		_putchar(*str);
		count += 1;
		++str;
	}
	return (count);
}

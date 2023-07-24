#include <unistd.h>
int _putchar(char ch)
{
	int count = 0;

	write(1, &ch, 1);
	return (count + 1);
}

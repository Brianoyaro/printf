/*#include "main.h"
int print_function(char c, va_list args)
{
        int count = 0;
        char ch;
        char *str;
        int n;

        if (c == 'c')
        {
                ch = va_arg(args, int);
                count += _putchar(ch);
        }
        else if (c == 's')
        {
                str = va_arg(args, char *);
                count += _puts(str);
        }
        else if ((c == 'd')||(c == 'i' ))
        {
                n = va_arg(args, int);
                count += printnumber(n);
        }else if (c == 'x')
        {
                n = va_arg(args, int);
                count += printsmallhex(n);
        }
        else if (c == 'X')
        {
                n = va_arg(args, int);
                count += printbighex(n);
        }
        else if (c == 'b')
        {
                n = va_arg(args,int);
                count += printbinary(n);
        }
        else if (c == 'o')
        {
                n = va_arg(args, int);
                count += printoctal(n);
        }
        else if (c == 'u')
        {
                n = va_arg(args, int);
                count += printunsigned(n);
        }
        else if (c == 'p')
        {
                count += _putchar('0');
                count += _putchar('x');
                void *m = va_arg(args, void *);
                count += printpointer((uint64_t) m);
        }
        else if (c == '%')
                count += _putchar('%');
	        else if ( c == 'r')
        {
                str = va_arg(args, char *);
                count += reverse_string(str);
        }
        else if (c == 'R')
        {
                str = va_arg(args, char*);
                count += printrot13(str);
        }
        return (count);
}*/

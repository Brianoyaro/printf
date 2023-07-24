#ifndef MAIN_H
#define MAIN_H
#include <unistd.h> /*for the p_putchar function*/
#include <stdarg.h> /*va_list macros*/

int _printf(const char *format, ...);
int _putchar(char ch);
int _puts(char *str);
#endif

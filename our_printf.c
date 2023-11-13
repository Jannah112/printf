#include "main.h"

/**
 * _printf - a function that replaces printf.
 * @format: string to be printed.
 * NOV 11th 23
 * Ahmed & Alaa
 * Return: count Success, -1 error.
 */
int _printf(const char *format, ...)
{
	int count = 0, i = 0;

	va_list daloom;

	if (format == 0 || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(daloom, format);
	while (format[i] != 0)
	{
		if (format[i] != '%')
			count += write(1, &format[i], 1);
		else
		{
			i++;
			count += cases(format[i], daloom);
		}
		i++;

	}
		va_end(daloom);
		return (count);
}

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
	int count = 0, i = 0, num;

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
			switch (format[i])
			{
				case '\0':
					break;
				case 'c':
					count += put_char(va_arg(daloom, int));
					break;
				case 's':
					count += put_str(va_arg(daloom, char *));
					break;
				case '%':
					count += write(1, "%%", 1);
					break;
				case 'd':
					num = va_arg(daloom, int);
					print_number(num);
					count += counter(num);
					break;
				default:
					count += write(1, &format[i - 1], 1);
					count += write(1, &format[i], 1);
					break;
			}
		}
		i++;

	}
		va_end(daloom);
		return (count);
}

#include "main.h"

/**
 * cases - a function that deals with different cases
 * @c: character
 * @n: varadiac function
 *
 * Return: number of char printed
*/
int cases(char c, va_list n)
{
	int count = 0, num;

			switch (c)
			{
				case '\0':
					break;
				case 'c':
					count += put_char(va_arg(n, int));
					break;
				case 's':
					count += put_str(va_arg(n, char *));
					break;
				case '%':
					count += write(1, "%%", 1);
					break;
				case 'd':
					num = va_arg(n, int);
					print_di(num);
					count += counter(num);
					break;
				case 'i':
					num = va_arg(n, int);
					print_di(num);
					count += counter(num);
					break;
				default:
					count += write(1, "%%", 1);
					count += write(1, &c, 1);
					break;
			}
	va_end(n);
	return (count);
}

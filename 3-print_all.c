#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - jehejei
 * @format: jeej
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list arg;
	char *sp = "";
	char *v;

	if (format == 0)
	{
		printf("\n");
		return;
	}
	va_start(arg, format);
	while (format[i] != 0)
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sp, va_arg(arg, int));
				break;
			case 'i':
				printf("%s%d", sp, va_arg(arg, int));
				break;
			case 'f':
				printf("%s%f", sp, va_arg(arg, double));
				break;
			case 's':
				v = va_arg(arg, char *);
				if (v == 0)
					v = "(nil)";
				printf("%s%s", sp, v);
				break;
			default:
				i++;
				continue;
		}
		sp = ", ";
		i++;
	}
	printf("\n");
}


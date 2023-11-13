#include "main.h"
/**
 * put_str - function to print string
 * @s: string to print
 * Return: return number of chars printed
 */
int put_str(char *s)
{
	char *p = "(null)";

	if (s == 0)
	{
		write(1, p, strlen(p));
		return (strlen(p));
	}
	write(1, s, strlen(s));
	return (strlen(s));
}

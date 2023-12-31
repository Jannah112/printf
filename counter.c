#include "main.h"
/**
 * counter - f name
 * @number: number
 * Return: return number of digits
 */
int counter(long int number)
{
	 int count = 0, base;

	if (number < 0)
	{
		number *= -1;
		count++;
	}
	if (number >= 0 && number <= 9)
	{
		count++;
	}
	if (number > 9)
	{
		base = 10;
		while (number / base > 9)
		{
			base *= 10;
		}
		while (base > 0)
		{
			number = number % base;
			base = base / 10;
			count++;
		}
	}
		return (count);
}

#include "main.h"
/**
 * counter - f name
 * @number: number
 * Return: return number of digits
 */
int counter(int number)
{
	 int count = 0, base;

	if (number < 0)
	{
		count++;
		number = INT_MAX;
	}
	if (number >= 0 && number <= 9)
	{
		count++;
	}
	if (number > 9)
	{
		base = 10;
		while (base > 0 && number / base > 9)
		{
			base *= 10;
		}
		while (base > 0)
		{
			base = base / 10;
			count++;
		}
	}
		return (count);
}

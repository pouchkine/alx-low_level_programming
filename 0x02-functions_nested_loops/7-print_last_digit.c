#include "main.h"

/**
 * print_last_digit - this program prints the last digit of a number
 * @n: this is the parameter
 * Return: int
 */

int print_last_digit(int n)
{
n = n % 10;

if (n < 0)
	n *= -1;

_putchar(n + '0');
return (n);
}

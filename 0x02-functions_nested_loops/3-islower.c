#include "main.h"

/**
 * _islower - to test which character is lower
 * @c: this is the parameter
 * Return: c or 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

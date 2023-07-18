#include "main.h"
/**
 * _islower - 1 for a input
 * @c:  ASCII code character
 * Return: 1 lower cases and 0 for others
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
	_putchar('\n');
}

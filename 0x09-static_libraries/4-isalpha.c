#include "main.h"
/**
  * _isalpha - i for input
  * @c: ASCII code character
  * Return: 1 for lowercase and uppercase and 0 for others
  */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

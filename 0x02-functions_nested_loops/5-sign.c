#include "main.h"
/**
  * print_sign - if n is greater or less or equal 0
  * Return: 1 if greater than 0, 0 if equal 0; - if lesser that 0
  * @n: input number
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}

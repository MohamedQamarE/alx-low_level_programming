#include "main.h"
/**
  * print_alphabet_x10 - print alphabets 10 times
  * Return: 0 success
  */
void print_alphabet_x10(void)
{
	int i;
	int n;

	for (i = 1; i <= 10; i++)
	{
		for (n = 97; n <= 122; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}

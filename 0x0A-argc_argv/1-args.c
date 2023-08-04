#include <stdio.h>
/**
  * main - prints all arguments it receives
  * @argc: int
  * @argv: list
  * Return: 0 success
  */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

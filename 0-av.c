#include <stdio.h>

/**
  * main -entry point
  *
  * Return: 0
  */
int main(int ac, char **av)
{
	while (*av != NULL)
	{
		printf("%s ", *av);
		av++;
	}
	printf("\n");
	return (0);
}

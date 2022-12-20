#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
  * main -program that looks for files in the current path
  * Return: 0 
  */
int main(int ac, char **av)
{
	unsigned int i, j, k;
	struct stat st;
	char *path;

	if (ac < 2)
	{
		printf("Usage: %s filename ...\n", av[0]);
		return (1);
	}

	i = 1;
	while (av[i] != NULL)
	{
		j = 0;
		k = 2;
		printf("%s: ", av[i]);
		path = malloc((strlen(av[i]) + 2) * sizeof(char));
		while (av[i][j] != '\0')
		{
			path[0] = '.';
			path[1] = '/';
			path[k] = av[i][j];
			j++;
			k++;
		}
		path[k] = '\0';
		if (stat(path, &st) == 0)
		{
			printf(" FOUND\n");
		}
		else
			printf(" NOT FOUND\n");
		free(path);
		i++;
	}
	return (0);
}

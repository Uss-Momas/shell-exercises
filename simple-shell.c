#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fillArguments(char *arg);

int totalArgs(char *buf)
{
	int total = 0;
	char *token;

	token = strtok(buf, " ");
	while (token != NULL)
	{
		token = strtok(NULL, " ");
		total++;
	}
	return (total);
}

char *arguments(char *buffer)
{
	char *av;
	char *token, *copy;
	int total = 0;

	av = "sdasda asdasd";

	copy = buffer;
	total = totalArgs(buffer);
	printf("Total = %d\n", total);
	
	token = strtok(copy, " ");
	while (token != NULL)
	{
		printf("string: %s\n", token);
		token = strtok(NULL, " ");
	}
	return av;
}
/**
  * main - entry point
  *
  * Return: 0
  */
int main(int ac, char **av)
{
	char *buffer, *token;
	size_t bufsize = 1024;
	size_t chars_read;
	int i = 0, total = 0;

	buffer = malloc(bufsize * sizeof(char));
	if (buffer == NULL)
	{
		perror("Unable to allocate buffer");
		exit(-1);
	}

	while (1)
	{
		printf("#cisfun$ ");
		chars_read = getline(&buffer, &bufsize, stdin);
		if (chars_read == -1)
			return (-1);
		token = "sa";
		/*printf("%s", buffer);*/
		/*token = strtok(buffer, " ");
		while (token != NULL)
		{
			printf("%s\n", token);
			token = strtok(NULL, " ");
			i++;
		}
		total = i;*/
		arguments(buffer);
		printf("Numero de Argumentos: %i, %i, %s\n", i, total, token);
		i = 0;
	}
	return (0);
}

void fillArguments(char *arg)
{

}

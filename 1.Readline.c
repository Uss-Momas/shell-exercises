#include <stdio.h>
#include <stdlib.h>
/**
  * main - entry point
  *
  * Return: 0
  */
int main(int ac, char **av)
{
	char *buffer;
	size_t bufsize = 1024;
	size_t chars_read;

	buffer = malloc(bufsize * sizeof(char));
	if (buffer == NULL)
	{
		perror("Unable to allocate buffer");
		exit(-1);
	}

	while (1)
	{
		printf("$ ");
		chars_read = getline(&buffer, &bufsize, stdin);
		if (chars_read == -1)
			return (-1);
		printf("%s", buffer);
	}
	return (0);
}


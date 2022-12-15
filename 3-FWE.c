#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
  * main - entry point
  *
  * Return: 0
  **/
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	pid_t my_pid, child_pid;
	int status;
	int i;

	i = 0;
	while (i < 5)
	{
		child_pid = fork();
		my_pid = getpid();
		if (child_pid == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
				perror("Error: ");
		}
		else
		{
			wait(&status);
			printf("In the father process now: pid = %u\n", my_pid);
			i++;
		}
	}
	return (0);
}

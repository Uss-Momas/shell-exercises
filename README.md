# shell-exercises
## Arguments
The command line arguments are passed through the main function: int main(int ac, char **av);

- av is a NULL terminated array of strings
- ac is the number of items in av

av[0] usually contains the name used to invoke the current program. av[1] is the first argument of the program, av[2] the second, and so on.
### EXERCISES
0. **AV**
Write a program that prints all the arguments, without using ac of the main function.
1. **Read line**
Write a program that prints "$ ", wait for the user to enter a command, prints it on the next line. man 3 getline

2. **command line to av**
Write a function that splits a string and returns an array of each word of the string.
man strtok

## Executing a program, creating a process, using wait
Using execve function. man 2 execve
Using fork function to create processes. man 2 fork
Using wait function to suspend the execution of a process. man 2 wait

### EXERCISE: fork + wait + execve
Write a program that executes the command ls -l /tmp in 5 different child processes. Each child should be created by the same process (the father). Wait for a child to exit before creating a new child.

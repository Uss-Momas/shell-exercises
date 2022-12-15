# shell-exercises
## Arguments
The command line arguments are passed through the main function: int main(int ac, char **av);
- av is a NULL terminated array of strings
- ac is the number of items in av
av[0] usually contains the name used to invoke the current program. av[1] is the first argument of the program, av[2] the second, and so on.
0. AV
Write a program that prints all the arguments, without using ac of the main function.
1. Read line
Write a program that prints "$ ", wait for the user to enter a command, prints it on the next line. man 3 getline


#include <stdio.h>
/**
 * main - counters the args
 * Return: 0 on success
 * @argc: argument counter
 * @argv: argument vector
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	argc = argc - 1;
	printf("%i \n", argc);
	return (0);
}

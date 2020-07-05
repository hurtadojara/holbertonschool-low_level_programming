#include <stdio.h>
/**
 * main - prints program name
 * Return: 0 on succes 1 on failure
 * @argc: arguments counter
 * @argv: arguments array
 */
int main(int argc, char *argv[])
{
	if (argc < 0 || NULL)
		return (1);
	printf("%s\n", argv[0]);
	return (0);
}

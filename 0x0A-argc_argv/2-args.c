#include <stdio.h>
/**
 * main - prints the args
 * Return: return 0 on success
 * @argc: arg counter
 * @argv: arguments vector
 */
int main(int argc, char *argv[])
{
	int i;
	if (argc)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
		return (0);
	}
	else
		return (-1);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - sums integers
 * Return: 0 un success 1 on failuree
 * @argc: number of arguments
 * @argv: arguments vector
 */
int main(int argc, char *argv[])
{
	int result = 0, i;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			if (*argv[i] == '\0')
				printf("0\n");
			*argv[i] = atoi(argv[i]);
			result += *argv[i];
		}
	}
	printf("%d\n", result);
	return (0);
}

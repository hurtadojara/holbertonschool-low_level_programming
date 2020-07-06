#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints multiply
 * Return: 1 on error 0 on success
 * @argc: arguments counter
 * @argv: arguments vector
 */
int main(int argc, char *argv[])
{
	int result = 0, atoi1, atoi2;
	char *str1 = argv[1], *str2 = argv[2];

	if (argc != 2)
	{
		printf("Error");
		return (1);
	}
	else
	{
	atoi1 = atoi(str1);
	atoi2 = atoi(str2);
	result = atoi1 * atoi2;
	printf("%d\n", result);
	return (0);
	}
}

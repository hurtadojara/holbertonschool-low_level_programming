#include "3-calc.h"
/**
* main - call other functions
* @argc: arguments counter
* @argv: arguments vector
* Return: return an integer 0 on success
*/
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operation = get_op_func(argv[2]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[2] != '+' &&  *argv[2] && '-' && *argv[2] != '%' && *argv[2] != '/'
	&& *argv[2] != '*')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = operation(num1, num2);
	printf("%d\n", result);
	return (0);
}

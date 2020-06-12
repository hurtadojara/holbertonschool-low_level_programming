#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int entero;
	char letra;
	long largo;
	long long doble;
	float decimal;

	printf("Size of a char: %c byte(s)\n", sizeof(letra));
	printf("Size of an int: %d byte(s)\n", sizeof(entero));
	printf("Size of a long int: %li byte(s)\n", sizeof(largo));
	printf("Size of a long long int: %lli byte(s)\n", sizeof(doble));
	printf("Size of a float: %f byte(s)\n", sizeof(decimal));
	Return(0);
}

#include <stdio.h>
/**
 * main - main function
 * Return: 0 on success
 */
int main(void)
{
	int entero;

	for (entero = '0'; entero <= '9'; entero++)
	{
		putchar(entero);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

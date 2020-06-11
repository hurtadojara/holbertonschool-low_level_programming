#include <stdio.h>
/**
 * main - main function
 * Return: 0 on success
 */
int main(void)
{
	int entero, entero2;

	for (entero = '0'; entero <= '9'; entero++)
	{
		for (entero2 = '0'; entero2 <= '9'; entero2++)
		{
			putchar(entero);
			putchar(entero2);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - main function
 * Return: 0 on success
 */
int main(void)
{
	int entero;

	for (entero = 'z'; entero >= 'a'; entero--)
	{
		putchar(entero);
	}
	putchar('\n');
	return (0);
}

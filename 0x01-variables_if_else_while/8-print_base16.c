#include <stdio.h>
/**
 * main - main function
 * Return: 0 on success
 */
int main(void)
{
	int entero, enter;

	for (enter = '0'; enter <= '9'; enter++)
	{
		putchar(enter);
	}
	for (entero = 'a'; entero <= 'f'; entero++)
	{
		putchar(entero);
	}
	putchar('\n');
	return (0);
}

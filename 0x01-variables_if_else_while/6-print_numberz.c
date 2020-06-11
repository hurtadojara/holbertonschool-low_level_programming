#include <stdio.h>
/**
 * main - main function
 * Return: 0 on success
 */
int main(void)
{
	int character;

	for (character = '0'; character <= '9'; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}

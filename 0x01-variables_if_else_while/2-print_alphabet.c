#include <stdio.h>
/**
 * main - main function
 * Return: 0 on success
 */
int main(void)
{
	int character;

	for (character = 'a'; character <= 'z'; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}

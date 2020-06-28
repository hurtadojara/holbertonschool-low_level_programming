#include "holberton.h"
/**
 * _strspn - hhffhbh
 * Return: unsigned int
 * @s: string
 * @accept: chars
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, a;
	unsigned int k;

	for (i = 0; accept[i] != '\0'; i++)
	{
	}
	k = 0;
	for (j = 0; s[j] != '\0'; j++)
	{
		for (a = 0; a <= i; a++)
		{
			if (s[j] == accept[a])
			{
				k++;
				break;
			}
		}
	}
	return (k);
}

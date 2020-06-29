#include "holberton.h"
/**
 * _strpbrk - does ehat function says
 * Return: a pointer to string or null
 * @s: string
 * @accept: 2 string
 */
char *_strpbrk(char *s, char *accept)
{
	int l, i, j, k, o;
	char *p, array[100];

	for (l = 0; s[l] != '\0'; l++)
	{
	}
	for (j = 0; accept[j] != '\0'; j++)
	{
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; k < l; k++)
		{
			if (s[i] == accept[k])
			{
				o = 0;
				l = l + 2;
				for (; k < l; o++)
				{
					array[o] = s[k - 1];
					k++;
				}
				array[o] = '\0';
				p = array;
				return (p);
			}
		}
	}
	return ('\0');
}

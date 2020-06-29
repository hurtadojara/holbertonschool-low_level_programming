#include "holberton.h"
/**
 * 
 * 
 * 
 * 
 */
char *_strstr(char *haystack, char *needle)
{
    int i, j, k;
    char array[12], *p;

    for (j = 0; needle[j] != '\0'; j++)
    {
    }
    for (i = 0; haystack[i] != '\0'; i++)
    {
        if (needle[0] == haystack[i])
        {
            for (k = 0; k < j; k++, i++)
            {
                array[k] = haystack[i];
            }
            array[k] = '\0'; 
            p = array;
            return (p);
        }
    }
    return ('\0');
}

#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string
 * @needle: substring
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		while (*needle != '\0' && *haystack == *needle)
		{
			if (haystack++ == needle++)
			{
				haystack++;
				needle++;
			}
			else if (*needle++ == '\0')
			{
				return (haystack);
			}
		}
	}
	return (0);
}

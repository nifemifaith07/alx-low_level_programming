#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * If n <= the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 * @s1: pointer to string
 * @s2: pointer to string
 * @n: unsigned integer
 *
 * Return: pointer to newly allocated space in memory
 * which contains s1 followed by n bytes of s2 null terminated
 * If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a1, a2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a1 = 0; s1[a1] != '\0'; a1++)
		;
	for (a2 = 0; s2[a2] != '\0'; a2++)
		;
	if (n >= a2)
		n = a2;
	s = malloc(sizeof(char) * (a1 + n + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = a1; j < a1 + n; j++)
		s[j] = s2[j - a1];
	s[j] = '\0';
	return (s);
}
